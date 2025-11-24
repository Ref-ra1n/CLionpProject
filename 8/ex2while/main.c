#include <stdio.h>

int main() {
    int i = 1;
    int total = 0;
    while (i <= 100){
        //先写循环体，再写入口条件，可以根据边界值（最后几次的值）判断
        total += i;
        ++i;
    }
    printf("total = %d\n",total);
    return 0;
}
