#include <stdio.h>
/*输入一批正整数（以零或负数为结束标志），求其中的奇数和。要求定义和调用函数even(n)判断数的奇偶性，
当n为偶数时返回1，否则返回0。
Input
多个正整数，以零或负数为结束标志。
Output
1个数。*/
int even(int n){
    if(n%2 == 0){
        return 1;
    } else{
        return 0;
    }
}
int main() {
    int num,sum = 0;
    while (1){
        scanf("%d",&num);
        if(num <= 0){
            break;
        }
        if(!even(num)){
            sum += num;
        }
    }
    printf("%d\n",sum);
    return 0;
}
