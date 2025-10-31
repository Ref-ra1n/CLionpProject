#include <stdio.h>

//短路运算 逻辑与和逻辑或
int main() {
   int i=0;
   i && printf("you can't see me\n");//当i为假时，不会执行逻辑与后的运算
  /* if(i)
   {
       printf("you can't see me\n");
   }*/
    i =1;
    i || printf("you can't see me\n");
    return 0;
}
