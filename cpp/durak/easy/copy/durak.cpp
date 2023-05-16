#include "cstdlib"
#include <iostream>
#include"durak.h"

int player::n = 0;

void player::set(bank& Bank){
    if(n < 36){
        for(int i = 0; i < 6; i++){
            cards[i] = Bank.lot + n;
            n++;
        }
    }
}

void card::set(int a, int b){
    domen = a; order = b;
}

bank::bank(){
    int k = 0;
    int num;
    srand(time(0));
    card templot[36];
    for(int i = 1; i <= 4; i++)
    for(int m = 1; m <= 9; m++){
        templot[k].set(i, m);
        k++;
    } k = 0;
    while(k != 36){
        num = rand() % 36;
        if(templot[num].order != 0){
            lot[k] = templot[num];
            templot[num].order = 0;
            k++;
        }
    }
}

void card::show(){
    std::cout<< "-----------------"<< std::endl;
    std::cout << "| ";
    switch(order){
        case 6:
            std::cout << "Jack          |";
            break;
        case 7:
            std::cout << "Queen         |";
            break;
        case 8:
            std::cout << "King          |";
            break;
        case 9:
            std::cout << "Ace           |";
            break;
        case 5:
            std::cout <<  order + 5 << "            |";
            break;
        default:
            std::cout <<  order + 5 << "             |";
    }
    std::cout << "\n|\t\t|" <<std::endl;
    std::cout << "| ";
    switch(domen){
        case 1:
            std::cout << "       hearts";
            break;
        case 2:
            std::cout << "     diamonds";
            break;
        case 3:
            std::cout << "       spades";
            break;
        default:
            std::cout << "        clubs";
    }
    std::cout << " |" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}

player::player(bank& Bank){
    this->set(Bank);
    std::fgets(name, 20, stdin);
}

void player::show(){
    std::cout << "\t\t" << name << std::endl;
    for(int i = 0; i < 6; i++)
    cards[i]->show();
}
