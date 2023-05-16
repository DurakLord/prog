#include <stdio.h>


struct Jack{
    int a, b, c;
    int (*method)(struct Jack *);
};

typedef struct Jack Jack;

static int jack(Jack* obj){
    return (obj->a);
}






