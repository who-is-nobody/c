#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <locale.h>
#include <float.h>

int main(int argc, char *argv[])
{
     setlocale(LC_NUMERIC, "");
     printf("char: %zd\n", sizeof(char));
     printf("int: %zd\n", sizeof(int));
     printf("float: %zd\n", sizeof(float));
     printf("double: %zd\n", sizeof(double));
     printf("long: %zd\n", sizeof(long));
     printf("long double: %zd\n", sizeof(long double));
     printf("char: %'d ~ %'d\n", CHAR_MIN, CHAR_MAX);
     printf("int: %'d ~ %'d\n", INT_MIN, INT_MAX);
     printf("float: %'f ~ %'f\n", FLT_MIN, FLT_MAX);
     printf("double: %'f ~ %'f\n", DBL_MIN, DBL_MAX);
     printf("long: %'ld ~ %'ld\n", LONG_MIN, LONG_MAX);
     printf("long double: %'Lf ~ %'Lf\n", LDBL_MIN, LDBL_MAX);
     return 0;
}
