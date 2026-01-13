#include <stdio.h>
#include <stdlib.h>
/*int* func(){
    int arr[] = {1,2,3};
    for (int i = 0; i < 3; ++i) {
        printf("func arr[i] = %d\n",arr[i]);
    }
    return arr;
}*/
int* func(){
    int* arr = (int*)malloc(3* sizeof(int ));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
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
    free (p);//避免内存泄露
    return 0;
}