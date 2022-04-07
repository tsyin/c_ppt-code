#include<stdio.h>

struct month
    {
        /* data */
        char name[20];
        char abb[4];
        int days;
        int mno;
    };
    struct month year[12] = {
        {
            "January",
            "Jan",
            31,
            1
        },
        {
            "February",
            "Feb",
            28,
            2
        },
        {
            "March",
            "Mar",
            31,
            3
        },
        {
            "April",
            "Apr",
            30,
            4
        },
        {
            "May",
            "May",
            31,
            5
        },
        {
            "June",
            "Jun",
            30,
            6
        },
        {
            "July",
            "Jul",
            31,
            7
        },
        {
            "August",
            "Aug",
            31,
            8
        },
        {
            "September",
            "Sep",
            30,
            9
        },
        {
            "October",
            "Oct",
            31,
            10
        },
        {
            "November",
            "Nov",
            30,
            11
        },
        {
            "December",
            "Dec",
            31,
            12
        }
    };
int todays(int monthes);

int main(){
    int month;
    while(scanf("%d",&month) >= 1)
        printf("%d\n",todays(month));
    return 0;
}

int todays(int monthes){
    int days = 0;
    for(int i = 0;i < monthes;i++){
        days += year[i].days;
    }
    return days;
}