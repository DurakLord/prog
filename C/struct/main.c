#include "struct.h"

int main(void){
    Jack suck;
    suck.a = 90;
    suck.method = jack;
    printf("%d",suck.method(&suck) );
}