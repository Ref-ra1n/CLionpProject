#include <stdio.h>
void func(int i){
    printf("i = %d\n",i);
    //避免无限递归触发栈溢出，可以设计一个递归出口
    if(i <= 0){
        return;
    } else{
        func(i - 1);
    }
}
int main() {
    func(4);
    return 0;
}
