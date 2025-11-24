#include <stdio.h>
//“水仙花数”是指一个三位数，其各位数字的立方和等于该数本身。例如，153是一个水仙花数，因为 1³ + 5³ + 3³ = 153。
//请编写程序，找出所有的三位水仙花数。
int main() {
   /* int result,ge,shi,bai;
    for (int i = 100; i <= 999; ++i) {
        ge = i%10;
        shi = i/10%10;
        bai =i/100;
        if(i == ge*ge*ge + shi*shi*shi + bai*bai*bai){
            printf("%d\n",i);
        }
    }*/
    for (int a = 1; a <= 9; ++a) {
        for (int b = 0; b <= 9; ++b) {
            for (int c = 0; c <= 9; ++c) {
                if(a*100 + b*10 + c == a*a*a + b*b*b + c*c*c){
                    printf("%d\n",a*100 + b*10 + c);
                }
            }
        }
    }
    return 0;
}
