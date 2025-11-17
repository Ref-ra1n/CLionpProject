#include <stdio.h>

int main() {
   /* int i;//用来存放从stdin过来的数据
    int ret = scanf("%d",&i);
    //%d是一个控制符，用来说将要接收的数据是整数
    //&i 将数据存入i的地址当中，&符号取地址，不可省略
    printf("ret = %d,i = %d\n",ret,i);*/
   int i ;
   float f;
    scanf("%d%f",&i,&f);
    printf("i = %d,f = %f\n",i,f);
    return 0;
}
