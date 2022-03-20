#include<stdio.h>

int main(void){
    FILE* fp;
    int k;
    char str[30] = "Nanette eats gelatin.";
    fp = fopen("gelatin.txt","w");
    for(k = 0;k < 30; k++)
        fputc(str[k],fp);
    fclose(fp);
    return 0;
}