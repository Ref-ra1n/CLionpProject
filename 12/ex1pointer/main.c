#include <stdio.h>

int main() {
    int i = 10;
    int *p;
    //&运算符出现在非定义语句中，表示取地址的意思
    p = &i;
    //对指针变量赋值可以修改指针的指向
    //int *p = &i;
    return 0;
}
