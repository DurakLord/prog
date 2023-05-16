#include <iostream>

void change(int num[]);

int main(void){
    int k[2];
    k[0] = 20;
    change(k);
    std::cout << k[0];
}


void change(int num[]){
    num[0] = 90;
}

