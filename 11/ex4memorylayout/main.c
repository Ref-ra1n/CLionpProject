#include <stdio.h>

int main() {
    int arr [5] = {1,2,3,4,5};
    int a = 20;
    for (int i = 0; i < 13; ++i) {
        arr[i] = i+1;
    }
    printf("a = %d\n",a);
    return 0;
}
