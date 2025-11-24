#include <stdio.h>

int main() {
    int i = 1;
    int total = 0;
    label:
    total += i;
    ++i;
    if(i <= 100){
        goto label;
    }
    printf("total = %d",total);
    return 0;
}
