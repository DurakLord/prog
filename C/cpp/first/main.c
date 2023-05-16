#include <stdio.h>

struct Jack;
typedef struct Jack Jack;
Jack* newObj();
int get(Jack*);
int main(void){
    Jack* k = newObj();
    printf("%d", get(k));
}