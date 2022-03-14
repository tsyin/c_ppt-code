#include <stdio.h>
#include<string.h>
#include<ctype.h>

char* s_gets(char* st,int n);
int strlenth(char *);
int main(void)
{
    char ss[80];
    s_gets(ss,80);
    puts(ss);
    printf("%d",strlenth(ss));
    
    return 0;
}

/* char* s_gets(char* st,int n){
    char * str_val;
    str_val = fgets(st,n,stdin);
    while(str_val)
    {
        if(*str_val == '\n')
            *str_val = '\0';
        else if(*str_val == '\0')
            return st;
        else
            str_val ++;
    }
    return st;
}
 */
int strlenth(char * str)
{
    int i = 0;
    while(str){
        if(*str != '\0')
        {
            putchar(*str);
            printf(" %d\n",i);
            i++;
            str ++;
        }
        else
            return i;
    }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // 即,ret_val != NULL
    {
        char* temp = strchr(ret_val,'\n');
        *temp = '\0';
    }
    return ret_val;
}

/* char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // 即,ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
} */

char * space(char * st)
{
    while(st){
        if(*st == '\0')
            return NULL;
        else if(*st == ' ')
            return st;
        else
            st ++;
    }
}

