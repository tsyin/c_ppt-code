#include<stdio.h>

    struct name {
    char first[20];
    char last[20];
    };

    struct bem {
    int limbs;
    struct name title;
    char type[30];
    };

    struct bem deb = {
    6,
    { "Berbnazel", "Gwolkapwolk" },
    "Arcturan"
    };

void printdeb(struct bem *);
int main(){

    struct bem* bp;
    bp = &deb;
    printdeb(bp);
    return 0;
}

void printdeb(struct bem * tempp){
    printf("%s %s is a %d-limbed %s",tempp->title.first,tempp->title.last,tempp->limbs,tempp->type);
}