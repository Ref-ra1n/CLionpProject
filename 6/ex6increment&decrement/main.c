#include <stdio.h>

int main() {
    int i = 3;
    int j;
    //j = ++i;前缀自增，先++后返回-->i = 4.j = 4
    j = i++;//后缀自增，先返回后++  -->i = 4,j = 3
    printf("i = %d,j = %d\n",i,j);
    return 0;
}
