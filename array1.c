#include <stdio.h>

void print_arrary(int *xx)
{
    printf("Print array\n");
    int i;
    for (i = 0; i < 10; ++i) {
        printf("xx[%d] = %d \n", i, xx[i]);
    }
}
int main(int argc, char *argv[])
{
    int xx[10] = { 0, };
    
    xx[0] = 5;
    xx[3] = 100;

    print_arrary(xx);
    print_arrary(xx);

    return 0;
}


