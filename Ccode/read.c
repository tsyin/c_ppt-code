#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    FILE* fp,*s;
    int ch;
    if((fp = fopen(argv[1],"r")) == NULL)
        fprintf(stderr,"not open 1file!\n");
    if((s = fopen("temp.txt","w")) == NULL)
        fprintf(stderr,"not open 2file!\n");   
    while((ch = getc(fp)) != EOF)
        putc(ch,s);
    fclose(fp);
    fclose(s);
    return 0;
}