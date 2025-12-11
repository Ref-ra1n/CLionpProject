#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    //int *p = &arr[0];
    int *p = arr;//数组名赋值给指针变量
    for (int i = 0; i < 5; ++i) {
        printf("i = %d,p+i = %p,&arr[i] = %p\n",i,p+i,&arr[i]);
        printf("i = %d,*(p+i) = %d,arr[i] = %d\n",i,*(p+i),arr[i]);
        printf("i = %d,p[i] = %d,*(arr+i) = %d\n",i,p[i],*(arr+i));
    }
    return 0;
}
