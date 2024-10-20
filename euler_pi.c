#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int step = atoi(argv[1]);
    long double pi = 0.0;
    for(int i = 1; i < step; i++){
        pi += (1.0 / (i * i));
    }
    printf("pi = %.16f\n", sqrt(pi*6.0));
    return 0;
}
