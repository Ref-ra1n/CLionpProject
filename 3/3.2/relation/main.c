#include <stdio.h>

//关系运算符，优先级小于算术运算符
int main() {
    int a;
    while (scanf("%d",&a))
    {
        if(3<a && a>10){
            printf("a is between 3 and 10");
        } else{
            printf("a is  not between 3 and 10");
        }
    }
    return 0;
}
