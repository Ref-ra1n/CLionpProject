#include <stdio.h>
//强制类型转换
int main() {
    int i=5;
    float f=i/2;//由于左右操作数都是整型，所以做的是整型运算
    printf("f=%f\n",f);
    float k=(float )i/2;//变量的数据类型不会改变，整个表达式是强制类型转换的表达式
    printf("k = %f\n",k);
    return 0;
}
