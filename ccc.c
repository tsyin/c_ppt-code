#include<stdio.h>

int main(void)
{
    FILE* fp;
    fp = fopen("w.txt","w");
    putc('s',fp);
    return 0;
}