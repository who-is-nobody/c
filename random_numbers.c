#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int count = 0;
    if(argc != 2){
        count = 1;
    }else{
        count = atoi(argv[1]);
    }
    srand(time(NULL));
    for(int i = 0; i < count; i++){
        printf("[%d] random number = %d\n", i, rand());
    }
    return 0;
}
