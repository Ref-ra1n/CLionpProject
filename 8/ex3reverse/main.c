#include <stdio.h>

int main() {
    int i;
    scanf("%d",&i);
    int o;
    while (i != 0){
        o *= 10;
        o += i%10;
        i /= 10;
    }
    printf("the reverse number  = %d\n",o);
    return 0;
}
