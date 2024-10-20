#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3){
        printf("Usage : %s <version>\n", argv[0]);
        printf("Guide: version 1 : integer to binary\nversion 2 : binary to integer");
        exit(1);
    }
    int ver = atoi(argv[1]);
    long num, bin = 0;
    if(ver = 1){
        num = atoi(argv[2]);
    }
    return 0;
}
