#include <stdio.h>
/*输入10个数，要求输出其中的最大值。
Input
测试数据有多组，每组10个数。
Output
对于每组输入,请输出其最大值（有回车）*/
#define LEN 10
int main() {
    int arr[LEN];
    while (scanf("%d", &arr[0]) == 1) {
        // 读剩下的9个
        for (int i = 1; i < LEN; ++i) {
            scanf("%d", &arr[i]);
        }
        int max = arr[0];
        for (int i = 1; i < LEN; ++i) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        printf("max=%d\n", max);
    }
    return 0;
}
