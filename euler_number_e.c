#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long double step = atof(argv[1]);
    long double e;
    e = pow((1 + 1/step), step);
    printf("e = %.16Lf\n", e);
    return 0;
}
