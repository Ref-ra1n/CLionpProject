#include <stdio.h>
//输入一个正整数，检查该数是否为质数
int main() {
    int n;
    scanf("%d",&n);
    int isPrime = 1;
    if(n == 1){
        isPrime = 0;
    } else {
        for (int i = 2; i*i <= n; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime){
        printf("Y\n");
    } else{
        printf("N\n");
    }
    return 0;
}
