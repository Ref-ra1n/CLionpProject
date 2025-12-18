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
   /*int* p = NULL;
   *p = 100;*/
   int* p ;
    func(*p);
    return 0;
}
