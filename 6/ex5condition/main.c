#include <stdio.h>

int main() {
    int a = 10,b = 5,c = 15;
    int max = a > b?a:b;
    max = max > c ? max : c;
    //int max = (a>b?a:b)>c ? (a>b?a:b) : c
    printf("max = %d\n",max);
    return 0;
}
