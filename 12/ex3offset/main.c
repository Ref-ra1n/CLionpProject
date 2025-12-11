#include <stdio.h>

int main() {
    int i = 10;
    double d  = 3.14;
    int *pi = &i;
    double *pd = &d;
    printf("pi = %p,pi+1 = %p\n",pi,pi+1);
    //指针可以用%p作为占位符
    printf("pd = %p,pd+1 = %p\n",pd,pd+1);
    //pi = 000000000061FE0C,pi+1 = 000000000061FE10
    //pd = 000000000061FE00,pd+1 = 000000000061FE08
    return 0;
}
