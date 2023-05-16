#include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>



int main(void){
    int s;

    void* a = mmap(NULL, 10000000000, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE,-1, 0);

    if(a == MAP_FAILED){
        printf("Error");
    }else  scanf("%d", s);

    memset(a, 'a', 10000000000);
    int l;

    scanf("%d", &l);
    scanf("%d", &l);

    return 0;
}
