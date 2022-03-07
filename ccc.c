#include<stdio.h>

int main(void){
    int arr[2][4]={1,2,3,4,5,6,7,8};
    int (*p)[4] = arr;
    printf("p = %p",p);
    printf("p + 1 = %d",**(p + 1));
    return 0;

}