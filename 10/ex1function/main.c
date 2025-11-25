#include <stdio.h>
//暂时先把函数的设计写在main函数的前面
//返回值类型  函数名称  函数参数列表（形参）  {函数体}
void is_triangle (int a,int b,int c){
    if(a+b>c && a+c>b && b+c>a){
        printf("Is triangle!\n");
    } else{
        printf("Not triangle!\n");
    }
}

int main() {
    int a1 =1,b1=2,c1=3;
    int a2 =2,b2=3,c2=4;
    int a3 =4,b3=5,c3=6;
    is_triangle(a1,b1,c1);//a1,b1,c1实参
    is_triangle(a2,b2,c2);
    is_triangle(a3,b3,c3);
    return 0;
}
