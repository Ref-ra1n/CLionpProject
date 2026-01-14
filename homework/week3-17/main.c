#include <stdio.h>
/*有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入到数组中。
假设数组长度为10，数组中前9个数（这9个数要求从键盘上输入，输入时要满足自小到大的输入顺序）已经按从小到大进行排序。
然后再从键盘上输入一个整数，将此整数插入到前有序的9个数中，使得最终的10个数依然是从小到大有序的。
Input
第一行输入以空格分隔的9个整数数，要求按从小到大的顺序输入。
第二行输入一个整数
Output
从小到大输出这10个数，每个数一行。*/
# define LEN 10
int main() {
    /*int arr[LEN];
    for (int i = 0; i < LEN; ++i) {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < LEN; ++i) {
        for (int i = 0; i < LEN-1; ++i) {
            int tep;
            if(arr[i]>arr[i+1]){
                tep =arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= tep;
            } else{
                continue;
            }
        }
    }
    for (int i = 0; i < LEN; ++i) {
        printf("%d\n",arr[i]);
    }
    return 0;*/
    int arr[LEN];

    // 1. 读入前9个已排序的数
    for (int i = 0; i < LEN - 1; ++i) {
        scanf("%d", &arr[i]);
    }

    // 2. 读入要插入的数
    int x;
    scanf("%d", &x);

    // 3. 从后往前找插入位置，并移动元素
    int pos = LEN - 1; // 默认插在最后
    for (int i = LEN - 2; i >= 0; --i) {
        if (arr[i] > x) {
            arr[i + 1] = arr[i]; // 后移
        } else {
            pos = i + 1;         // 找到插入位置
            break;
        }
    }
    arr[pos] = x;

    // 4. 输出（每个数一行）
    for (int i = 0; i < LEN; ++i) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
