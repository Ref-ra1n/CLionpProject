#include <stdio.h>
void swap(int *pa,int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("swap *pa = %d,*pb = %d\n",*pa,*pb);
}
int main() {
    int a = 10,b = 5;
    int *pa,*pb;
    pa = &a;
    pb = &b;
    swap(pa,pb);
    printf("main a = %d,b = %d\n",a,b);
    //swap *pa = 5,*pb = 10
    //main a = 5,b = 10
    return 0;
}
