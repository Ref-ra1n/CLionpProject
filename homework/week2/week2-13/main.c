#include <stdio.h>
/*Description
有一天, 小明收到一张奇怪的信, 信上要小明计算出给定数各个位上数字为偶数的和。
例如：5548，结果为12，等于 4 + 8 。
小明很苦恼，想请你帮忙解决这个问题。
Input
输入数据有多组。每组占一行，只有一个整整数，保证数字在32位整型范围内。
Output
对于每组输入数据，输出一行，每两组数据之间有一个空行*/

void sum(int a){
    int sum = 0,tep;
    while (a > 0){
        tep = a%10;
        if(tep%2 == 0){
            sum +=tep;
        }
        a /= 10;
    }
    printf("%d\n",sum);
    printf("\n");
}
int main() {
    /*int t;
    scanf("%d",&t);
    int arr[1000];
    for (int i = 0; i <t; ++i) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < t; ++i) {
        sum(arr[i]);
    }*/
    int num;
    while (scanf("%d",&num) == 1 ){
        sum(num);
    }
    return 0;
}
