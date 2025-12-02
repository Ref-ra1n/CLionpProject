#include <stdio.h>

int main() {
    int t,n;
    scanf("%d",&t);
    int arr[t];
    for (int i = 0; i < t; ++i) {
        scanf("%d",&n);
        int result = n%350%200%150;
        arr[i] = result;
    }
    for (int i = 0; i < t; ++i) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
