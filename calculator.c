#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int num){
    if(num == 1){
        return(1);
    }else{
        return(num * factorial(num - 1));
    }
}
int main(int argc, char *argv[])
{
    double a[2] = {atof(argv[1])};
    if(argc < 3){
        printf("Usage : %s <number> <operator> [number]\n", argv[0]);
        exit(1);
    }else if(argc == 4){
        a[1] = atof(argv[3]);
    }
    double num = 0;
    if(argv[2][0] == '+'){
        num = a[0] + a[1];
    }else if(argv[2][0] == '-'){
        num = a[0] - a[1];
    }else if(argv[2][0] == '*'){
        num = a[0] * a[1];
    }else if(argv[2][0] == '/'){
        num = a[0] / a[1];
    }else if(argv[2][0] == '^'){
        num = pow(a[0], a[1]);
    }else if(argv[2][0] == '!'){
        printf("%d\n", factorial(a[0]));
        exit(0);
    }else{
        printf("Usage : %s <number> <operator> [number]\n", argv[0]);
        exit(1);
    }
    printf("%.16f\n", num);
    return 0;
}
