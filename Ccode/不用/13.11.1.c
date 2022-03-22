#include<stdio.h>
#include<stdlib.h>

int main(void){
    printf("输入你想要写入的文件名:");
    char name[40];
    scanf("%s",name);
    FILE* fp;
    int ch;
    if((fp = fopen(name,"r")) == NULL)
        exit(EXIT_FAILURE);
    while((ch = getc(fp)) != EOF)
        putc(ch,stdout);
    fclose(fp);
    return 0;
}