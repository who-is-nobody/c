#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char  *argv[])
{
    if (argc < 2) {
        printf("error: ./fact <number>");
        exit(1);
    }
    setlocale(LC_NUMERIC, "");
    long long fac[100] = {1};
    int x = atoi(argv[1]);
    for(int i = 1; i <= x; ++i) {
        fac[i] = fac[i-1] * i;
    }
    printf("fact %d :  %lld\n", x, fac[x]);
    return 0;
}

