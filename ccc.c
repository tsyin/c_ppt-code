#include<stdio.h>

int main(void){
    int arr[8]={1,2,3,4,5,6,7,8};
    int *ptr;
    ptr = arr;
    printf("%d,%d",arr[1],*(ptr +1));
    return 0;
}