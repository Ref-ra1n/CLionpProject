#include <stdio.h>

//记住优先级，不要加太多括号，影响代码的阅读速度
int main() {
    int year,i,j=6;
    while (scanf("%d",&year))
    {
        if(year%4==0 && year%100!=0 || year%400==0){
            printf("this year is leap year");
        } else{
            printf("this year is not leap year");
        }
    }
    i=!!j;
    printf("i value = %d\n",i);
    return 0;
}
