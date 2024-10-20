#include <stdio.h>


struct namecard {
    char name[32];
    int height;
    int weight;
};

int scan_namecard(struct namecard *n)
{
    printf("scan :");
    fflush(stdout);
    scanf("%s", n->name);
    scanf("%d", &n->height);
    scanf("%d", &n->weight);
    return 0;
}

void print_namecard(struct namecard *n)
{
    printf("%s / %d / %d \n", n->name, n->height, n->weight);
}

int main(int argc, char *argv[])
{
    struct namecard nmcd[10];

    for (int i=0; i<3; ++i) {
        scan_namecard(&nmcd[i]);
        print_namecard(&nmcd[i]);
    }

    return 0;
}
