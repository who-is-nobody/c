#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    // preprocessor = 전처리기
#if 0
    srand(time(NULL));
    int coin = rand();
#else
    struct timespec tp;
    clock_gettime(CLOCK_MONOTONIC, &tp);

    srand((int)tp.tv_nsec);
    int coin = rand();
#endif
    if(coin % 2 == 0){
        printf("front\n");
    }else{
        printf("back\n");
    }
    return 0;
}
