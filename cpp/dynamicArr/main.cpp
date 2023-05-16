#include <iostream>
#include "dynamic.h"

int main(void){
    dynamicArr<int> *c = new dynamicArr<int>(2);
    delete c;
}
