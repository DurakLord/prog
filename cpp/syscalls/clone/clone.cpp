#include <iostream>
#include <sched.h>
#include <linux/sched.h>

void *stack;
int main(void){
    clone(, stack, );
}