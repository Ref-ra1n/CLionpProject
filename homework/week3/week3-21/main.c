#include <stdio.h>
/*输入一个N*N的矩阵，将其转置后输出
Input
可能有多组数据
每组数据输入的第一行包括一个整数N,(1<=N<=100)，代表矩阵的维数。
接下来的N行每行有N个整数，分别代表矩阵的元素。
Output
可能有多组测试数据，对于每组数据，将输入的矩阵转置后输出。*/
int main() {
    int n;
    while (scanf("%d",&n)==1) {
        int arr[n][n];
        for (int l = 0; l < n; ++l) {
            for (int j = 0; j < n; ++j) {
                scanf("%d",&arr[l][j]);
            }
        }
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < j+1; ++k) {
                int temp;
                temp = arr[j][k];
                arr[j][k] = arr[k][j];
                arr[k][j] = temp;
            }
        }
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if(k==0){
                    printf("%d",arr[j][k]);
                } else{
                    printf(" %d",arr[j][k]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
