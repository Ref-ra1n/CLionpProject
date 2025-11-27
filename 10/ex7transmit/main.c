#include <stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("swap,a = %d,b = %d\n",a,b);
}
int main() {
    int a = 10,b = 5;
    swap(a,b);//用实参的值初始化形参 -->值传递
    printf("main,a = %d,b = %d\n",a,b);
    //swap,a = 5,b = 10
    //main,a = 10,b = 5
    return 0;
}
