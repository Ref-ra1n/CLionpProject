#include <stdio.h>

int main() {
    int total = 0;
    for (int i = 0; i <= 100; ++i) {
        if(i%2 == 1){
            continue;
        } else{
            total += i;
        }
    }
    printf("%d\n",total);
    return 0;
}
