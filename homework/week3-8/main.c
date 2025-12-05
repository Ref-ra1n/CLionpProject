#include <stdio.h>
/*数字反转：
编写一个函数reverse，其功能是将一个正整数反转。如123可以反转为321，3682可以反转为2863，1200可以反转为21。
reverse函数的原型可以参考如下：
int  reverse（int num);
其中num为要反转的数，函数的返回值为反转后的数。
Input
从键盘上输入一个正整数n，代表要反转的数的个数，接着输入n个正整数
Output
将这些正整数依次反转并输出，输出的数据之间用空格分隔。*/
void reverse(int m){
    int result = 0;
    while (m >0){
        result *= 10;
        result += (m%10);
        m /= 10;
    }
    printf("%d ",result);
}
int main() {
    int n,m;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&m);
        reverse(m);
    }
    return 0;
}
