#include <stdio.h>
#include <stdlib.h>
void func(int* pi){
    *pi = 100;
}
int main() {
   /* int* p;
    p = (int*)0x12345678;
    //这是一个野指针
    *p = 100;
    printf("*p = %d\n",*p);*/
/*   int* p = NULL;//暂时没有指向要初始化为空指针
   int i = 101;
   p = &i;
   *p = 100;*/
   int* p = NULL;
   int i = 1;
   p = &i;
    func(p);
    return 0;
}
