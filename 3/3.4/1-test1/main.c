#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x)==1)
    {
        if(x%4==0 && x%100!=0 || x%400==0){
            printf("yes\n");
        } else{
            printf("no\n");
        }
    }
    return 0;
}
