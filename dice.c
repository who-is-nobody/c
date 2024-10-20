#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   struct timespec tp;
    clock_gettime(CLOCK_MONOTONIC, &tp);

    srand((int)tp.tv_nsec);
    int n = rand();
    int dice = n % 6;
    if(dice == 0){
	dice = 6;
    }
    printf("You rolled %d!\n", dice);
    return 0;
}
