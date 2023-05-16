#include "overloading.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
Main::Main(){
    std::cout << "Hello" << std::endl;
}

Main::operator int (){
    return 10;
};

Main::~Main(){
    std::cout << "Poka" << std::endl;
}

void* operator new(size_t a){
        std::cout << "A string was created" << std::endl;
        return malloc(10);

}

void* operator new(size_t a, const char* b){
    if(! strcmp(b, "Big"))
    {
        std::cout << "Big string" << std::endl;
        return malloc(90);
    }else{
        std::cout << "Just string" << std::endl;
        return malloc(10);
    }
}

void operator delete(void* p) throw() {
    std::cout << "A string was destroyed" << std::endl;
    free(p);
}
