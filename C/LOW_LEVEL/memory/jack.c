#include <stdio.h>
#include <stdlib.h>

int die_with_error(const char *msg) __attribute__((noreturn)){
    return 90;
};


int main() {
    printf("This line is never executed\n %d", die_with_error("can"));
    return 0;
}