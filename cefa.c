#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float ce, fa  = 0.0;
    if(argc < 2){
        printf("celsius to fahreneit: 1\n");
        printf("fahreneit to celsius: 2\n");
        exit(1);
    }else if(atoi(argv[1]) == 1){
        printf("enter celsius\n");
        scanf("%f", &ce);
        fa = (ce * 1.8) + 32;
        printf("fahreneit: %f", fa);
    }else if(atoi(argv[1]) == 2){
        printf("enter fahreneit\n");
        scanf("%f", &fa);
        ce = (fa - 32) / 1.8;
        printf("celsius: %f", ce);
    }else{
        printf("unknown value\n");
    }
    return 0;
}
