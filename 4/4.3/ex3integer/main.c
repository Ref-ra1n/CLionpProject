#include <stdio.h>

int main() {
  /*  printf("1234 = %d\n",1234);//十进制
    printf("01234 = %d\n",01234);//0开始的整型字面值是八进制的
    printf("0x1234 = %d\n",0x1234);//0x开始的整型字面值是十六进制的*/
/*int i = 0x7fffffff;
i += 1;
    printf("i = %d\n",i);//i = -2147483648*/
    unsigned  int u = 0xffffffff;
    u += 1;
    printf("u = %u",u);//u = 0
    return 0;
}
