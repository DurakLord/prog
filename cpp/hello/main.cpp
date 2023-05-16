#include <iostream>

struct Jack{
    int a, b, c;
    int hello();
};

int main(void){
    struct Jack hello = {20, 40, 60};
    hello = {90, 50 , 80};
    std::cout << hello.a;
}

int Jack::hello(){
    return 90;
}