#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long double even = 2.0;
    long double odd = 1.0;
    int step = atoi(argv[1]) * 2;
    long double pi = 1;
    int num = 1;
    while(num <= step){
        pi *= even/odd;
        if(num % 2 == 0)
            even += 2;
        else
            odd += 2;
        num++;
    }
    printf("pi = %.16Lf\n", pi * 2);
    return 0;
}
