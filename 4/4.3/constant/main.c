#include <stdio.h>
//使用宏定义来实现符号常量
//宏的作用是在预处理阶段做文本替换
#define R (3 + 1)
#define PIE 3
int main() {
    //pi=3,r=3

    printf("R = %d,A = %d\n",R,PIE*R*R);
    return 0;
}
