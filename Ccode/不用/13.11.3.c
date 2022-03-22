#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){
    printf("输入你要处理的文件名：");
    char name[40];
    scanf("%s",name);
    FILE *src,*tof;
    src = fopen(name,"r");
    strcat(name,"toup.txt");
    tof = fopen(name,"w");
    if(src == NULL || tof == NULL)
        exit(EXIT_FAILURE);
    int ch;
    while((ch = getc(src)) != EOF){
        ch = toupper(ch);
        putc(ch,tof);
    }
    fclose(src);
    fclose(tof);
    return 0;

}