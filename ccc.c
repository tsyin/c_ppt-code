#include<stdio.h>

void copy_arr(double* target1,double* sourse,int size);
void copy_ptr(double* target2,double* sourse,int size);
void copy_pptr(double* target3,double* sourse,double* sourse2);

int main(void){
    double sourse[5] ={1.1,2.2,3.3,4.4,5.5};
    double target1[5],target2[5],target3[5];
    copy_arr(target1,sourse,5);
    copy_ptr(target2,sourse,5);
    copy_pptr(target3,sourse,sourse + 5);
    return 0;
}
void copy_arr(double* target1,double* sourse,int size){
    for(int i = 0;i < size;i++){
        target1[i] = sourse[i];
        printf("%.2f  ",target1[i]);
    }
    printf("\n");
}
void copy_ptr(double* target2,double* sourse,int size){
    for (int i = 0; i < size; i++ ,target2 ++,sourse ++)
    {
        *target2 =  *sourse;
        printf("%.2f  ",*target2);
    }
    printf("\n");
}
void copy_pptr(double* target3,double* sourse,double* sourse2){
    for (; sourse < sourse2;target3 ++,sourse ++)
    {
        *target3 =  *sourse;
        printf("%.2f  ",*target3);
    }
    printf("\n");
}
