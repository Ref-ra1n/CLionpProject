#include <stdio.h>
/*爬楼梯问题
假设你正在爬一个楼梯，它总共有n阶台阶
每次你只能爬1或2阶
问：你有多少种不同的方法可以爬到楼顶*/
int f(int n){
    //大问题--->小问题
    if(n>2){
        int result = f(n-1) + f(n-2);
        return result;
    }
    //最小问题的解决方案
    if(n == 2){
        return 2;
    }
    if(n == 1){
        return 1;
    }
}
int main() {
    int n = 4;
    printf("f(n) = %d\n",f(4));
    return 0;
}
