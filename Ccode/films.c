#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
void showmovies(Item item);
char *s_gets(char *st, int n);
int main(void)
{
    List movies;
    Item temp;
    InitList(&movies);
    if (ListIsFull(&movies))
    {
        fprintf(stdout, "No memory avaiable! Bye!\n");
        exit(1);
    }
    //获取输入并储存
    puts("Enter your movie title:");
    while ((s_gets(temp.title, TSIZE)) != NULL && temp.title[0] != '\0')
    {
        puts("Enter your rating(0-10):");
        scanf("%d", &temp.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(temp, &movies) == false)
        {
            fprintf(stdout, "Problem allocatting memory\n");
            break;
        }
        if (ListIsFull(&movies))
        {
            puts("The list is full now.");
            break;
        }
        puts("Enter your next movie title(empty line to stop):");
    }
    //显示
    if (ListIsEmpty(&movies))
    {
        puts("No data entered!");
    }
    else
    {
        puts("here is the movie list:\n");
        Traverse(&movies, showmovies);
    }
    printf("You entered %d movies.\n", ListItemCount(&movies));
    //清理
    EmptyTheList(&movies);
    printf("Bye!\n");
    return 0;
}
void showmovies(Item item)
{
    printf("Movie:%s Rating:%d \n",item.title,item.rating);
}
char* s_gets(char *st,int n)
{
    char* ret_val;
    char* find;
    ret_val = fgets(st,n,stdin);
    if(ret_val)
    {
        find = strchr(st,'\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}