#include <stdlib.h>

static int name;

int* p(){
    return &name;
};


int* s(){
    return (int*) malloc(sizeof(int) * 10);
}

int f(int* a){
    free(a);
    return 10;
}

int add (int a, int b){
    return a + b;
}


