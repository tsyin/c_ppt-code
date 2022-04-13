#include<stdio.h>

int main(void){
    int num[100];
    int i = 0;
    while((scanf("%d",&num[i])) != EOF)
        i++;
    for(int k = 0;k < i; k++)
        printf("%d ",num[k]);
    return 0;
}