#include <stdio.h>
int func(){
    int arr[] = {1,2,3};
    for (int i = 0; i < 3; ++i) {
        printf("func arr[i] = %d\n",arr[i]);
    }
    return arr;
}
int main() {
    int *p = func();
    for (int i = 0; i < 3; ++i) {
        printf("main p[i] = %d\n",p[i]);
    }
    return 0;
}
