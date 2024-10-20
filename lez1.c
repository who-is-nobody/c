#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("enter steps\n");
        exit(1);
    }
    int step = atoi(argv[1]);
    int index_previous, index_current;
    long double n[2] = { 0.0, };
    long double pi[2] = { 0.0, };
    for(int i = 0; i <=  step; ++i){
        if(i % 2 == 0){
            index_current = 0;
            index_previous = 1;
        }else{
            index_current = 1;
            index_previous = 0;
        }
        n[index_current] = (long double)pow(-1, i) / (2 * i + 1);
        pi[index_current] = pi[index_previous] + n[index_current];
    }
    printf("pi =%.16Lf\n", pi[index_current] * 4);
    return 0;
}
