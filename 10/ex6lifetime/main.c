#include <stdio.h>

int a = 1;//程序一启动就有效，程序终止就失效
void func(){
    int a = 2;
}
int main(){
    int a = 3;
    func();
    return 0;
}
