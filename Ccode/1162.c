/*网上流传一句话:"常在网上飘啊，哪能不挨刀啊～"。其实要想能安安心心地上网其实也不难，学点安全知识就可以。
首先，我们就要设置一个安全的密码。那什么样的密码才叫安全的呢？一般来说一个比较安全的密码至少应该满足下面两个条件：
(1).密码长度大于等于8，且不要超过16。
(2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。
这四个字符类别分别为：
1.大写字母：A,B,C...Z;
2.小写字母：a,b,c...z;
3.数字：0,1,2...9;
4.特殊符号：~,!,@,#,$,%,^;
给你一个密码，你的任务就是判断它是不是一个安全的密码。*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    char password[20] = "";
    // unsigned int kind     = 00000000;
    // unsigned int isnums   = 00000001;
    // unsigned int isuppers = 00000010;
    // unsigned int islowers = 00000100;
    // unsigned int isteshus = 00001000;
    int time =  scanf("%d",);
    for(int k = scanf("%d",) >=1){
        // kind = 00000000;
        int isnums = 0;
        int isuppers = 0;
        int islowers = 0;
        int isteshus = 0;
        if(strlen(password)>16 || strlen(password) < 8){
            puts("NO");
            continue;
        }
        for(int i = 0;i < 20;i++){
            char temp = password[i];
            if(isdigit(temp) && isnums == 0)
                isnums = 1;
            else if(isupper(temp) && isuppers == 0)
                isuppers = 1; 
            else if(islower(temp) && islowers == 0)
                islowers = 1; 
            else if(temp == '^' || temp == '!' || temp == '@' || temp == '#' || temp == '$'|| temp == '%' || temp == '^')
                if(isteshus == 0)
                    isteshus = 1;
        }

        int s = isnums + isuppers + islowers + isteshus;
        if(s >= 3)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
