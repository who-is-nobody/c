#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("write your number");
    }
    int max = atoi(argv[1]);
    for(int i = 1; i <= max; ++i){
        for(int j = 1; j <= max; ++j){
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
