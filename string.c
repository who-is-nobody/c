#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char word[100];
    printf("enter your word\n");
    fgets(word, 100, stdin);
    puts(word);
    return 0;
}
