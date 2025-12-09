#include <stdio.h>
/*编写程序，将一维数组中的元素向右循环移动N次。
输入
第一行整数n，表示数组大小为n
第二行，n个数，表示数组中的n个元素。
第三行，整数N，表示数组向右移动N次。
输出
移动后的数组元素，每个元素后跟空格。*/
void move(int *arr,int n){
    if (n <= 1) return;
    int tep;
    for (int i = 0; i < n-1; ++i) {
       tep =arr[0];
       arr[0] =arr[i+1];
       arr[i+1] = tep;
    }
}
int main() {
    int n,N;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&N);
    if (n > 0) {
        N = N % n;
    }
    for (int i = 0; i < N; ++i) {
        move(arr,n);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
