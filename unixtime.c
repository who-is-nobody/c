#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    while(1){
        printf("%ld\n", (long)time(NULL));
        sleep(1);
    }
    return 0;
}
