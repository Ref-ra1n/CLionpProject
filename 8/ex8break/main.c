#include <stdio.h>

int main() {
    int total = 0,count = 0;
    for (int i = 1;  ; ++i) {
        if(total > 200){
            break;
        }
        total += i;
        count = i;
    }
    printf("total =%d, count = %d\n",total,count);
    return 0;
}
