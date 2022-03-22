#include<stdio.h>

int printline(FILE * ftemp);

int main(int argc,char* argv[]){
    FILE *fp1,*fp2;
    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2],"r");
    int a,b;
    a = printline(fp1);
    b = printline(fp2);
    while(a || b){
        putc('\n',stdout);
        if(a)
            a = printline(fp1);
        if(b)
            b = printline(fp2);
    }
    system("pause");
    return 0;
}

int printline(FILE * ftemp){
    int ch = getc(ftemp);
    while(ch != EOF){
        if(ch == '\n'){
            return 1;
        }
        putc(ch,stdout);
        ch = getc(ftemp);
    }
    //putc('\n',stdout);
    return 0;
}