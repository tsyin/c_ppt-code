#include<stdio.h>
#include<stdlib.h>

//编写一个程序,用来拷贝文件
int main(int argc,char * argv[]){
    int ch = 52;
    FILE *srcfp;
    FILE *copyfp;
    if(argc <3){
        fprintf(stderr,"参数少了");
        exit(EXIT_FAILURE);
    }
    srcfp = fopen(argv[1],"rb");
    copyfp = fopen(argv[2],"wb");
    if(srcfp == NULL || copyfp == NULL)
    {
        fprintf(stderr,"文件打不开");
        exit(EXIT_FAILURE);
    }
    printf("arg1:%s arg2:%s",argv[1],argv[2]);

    while((ch = getc(srcfp))!= EOF){
        printf("%c",ch);
        putc(ch,copyfp);
    }
    fclose(srcfp);
    fclose(copyfp);
    system("pause");
    return 0;
}