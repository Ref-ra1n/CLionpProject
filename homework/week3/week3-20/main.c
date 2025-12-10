#include <stdio.h>
/*冒泡排序（Bubble Sort），是一种计算机领域的较简单的排序算法。
1、我们可以从开始到结尾遍历数组，每次比较相邻的两个元素，如果左边的元素大于右边就把他们交换过来。
这样经过遍历之后，最大的数组元素会经由交换慢慢“浮”到数组的末尾。
2、我们多次重复1操作：第一次我们可以把最大的元素到浮到数组末尾，
第二次我们可以把第二大的元素的浮到数组倒数第二位，以此类推，直到第二小的元素浮到数组的第二位为止。
这样我们就得到了一个从小到大排列的有序数组了。
Input
第一行输入一个整数n（0<n<=100000)，表示有n个待排序数据;
随后的n行每行输入一个整数。
Output
升序输出排序结果*/
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            int temp ;
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(i==0){
            printf("%d",arr[i]);
        } else{
            printf(" %d",arr[i]);
        }
    }
    printf("\n");
    return 0;
}
