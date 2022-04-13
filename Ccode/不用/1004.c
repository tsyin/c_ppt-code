#include<stdio.h>
int cowsum(int year);
int main()
{
    int year;
    int cows;
    while(scanf("%d",&year) >= 1 && year != 0)
    {
        cows = cowsnum(year);
        printf("%d\n",cows);
    }
    return 0;
}

int cowsnum(int year){
    if(year == 1)
        return 1;
    else if(year == 2)
        return 1+1;
    else if(year == 3)
        return 2+1;
    else if(year == 4)
        return 3+1;
    else if(year == 5)
        return 4+2;
    else if(year > 4)
        return cowsnum(year-1) + cowsnum(year-3);
}