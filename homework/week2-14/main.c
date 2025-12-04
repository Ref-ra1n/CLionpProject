#include <stdio.h>
/*Description
小明的手机每天消费1元，每消费K元就可以获赠1元，一开始小明有M元，问最多可以用多少天？
Input
输入包括多个测试实例。每个测试实例包括2个整数M，K（2<=k<=M<=1000)。M=0，K=0代表输入结束。
Output
对于每个测试实例输出一个整数，表示M元可以用的天数*/
void count(int m,int k){
    int tep ,sum = 0;
    while (m > 0){
        tep = m/k;
        if(tep > 0){
            sum += tep*k;
            m = m-tep*k+tep;
        } else{
            sum += m;
            m = 0;
        }
    }
    printf("%d\n",sum);
}
int main() {
    int M,K;
    while (1){
        scanf("%d%d",&M,&K);
        if(M==K && K==0){
            break;
        }
        count(M,K);
    }
    return 0;
}
