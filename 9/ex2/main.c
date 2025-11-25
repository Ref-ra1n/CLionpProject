#include <stdio.h>
//完数是指除本身以外的因子之和等于其本身的数。
//任给一个自然数n,求n以内的所有完数。如果找不到，则输出"No"
int main() {
    int n,count = 0,tep = 0;
    scanf("%d",&n);
    //int isEmpty = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            if(i%j == 0){
                tep += j;
            }
        }
        if(tep == i){
            printf("%d\n",tep);
            ++count;
            //isEmpty = 0;
        }
        tep =0;
    }
    //if (isEmpty == 1){}
    if(count == 0){
        printf("No");
    }
    return 0;
}
