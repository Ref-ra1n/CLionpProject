#include <stdio.h>
/*假设一堆由1分、2分、5分组成的n个硬币总面值为m分，求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）。
Input
输入数据第一行有一个正整数T，表示有T组测试数据。接下来的T行，每行有两个数n，m，n和m的含义同上。
Output
对于每组测试数据，请输出可能的组合方式数，每组输出占一行。*/
void comb(int n,int m){
    int count = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n - i; ++j) {
            int k =n -i -j;
            if(k < 0){
                continue;
            }
            if(i+2*j+5*k == m){
                count++;
            }
        }
    }
    printf("%d\n",count);
}
int main() {
    int t;
    scanf("%d",&t);
    int n,m;
    for (int i = 0; i < t; ++i) {
        scanf("%d %d",&n,&m);
        comb(n,m);
    }
    return 0;
}
