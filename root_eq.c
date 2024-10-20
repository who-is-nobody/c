#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if(argc != 4){
        printf("Usage : %s <a> <b> <c>\n", argv[0]);
        exit(1);
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int root;
    double value[2];
    root = (b*b - 4*a*c);
    if(sqrt(root) - (int)(sqrt(root)) == 0.0){
        value[0] = (((-b) + sqrt(root))/(2*a));
        value[1] = (((-b) - sqrt(root))/(2*a));
    }else{
        printf("%d ± √(%d) / %d", -b, root, 2*a);
        exit(0);
    }
    if(value[0] == value[1]){
        printf("value: %f\n", value[0]);
    }else{
        printf("first value: %f\n", value[0]);
        printf("second value; %f\n", value[1]);
    }
    return 0;
}
