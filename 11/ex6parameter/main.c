#include <stdio.h>
#define LEN 5
void func(int arr[5],int length){//length补充的参数
    //在被调函数中数组会退化成一个地址，丢失了长度信息
    //arr[]方括号中的数字没用，不写都行
    printf("func sizeof(arr) = %zu\n", sizeof(arr));
    for (int i= 0; i < length; ++i) {
        printf("%3d",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[LEN] = {1,2,3,4,5};
    printf("main sizeof(arr) = %zu\n", sizeof(arr));
    for (int i= 0; i < sizeof(arr)/ sizeof(int); ++i) {
        printf("%3d",arr[i]);
    }
    //main sizeof(arr) = 20
    //  1  2  3  4  5
    printf("\n");
    func(arr,sizeof(arr)/ sizeof(int));
    //func sizeof(arr) = 8
    //  1  2  3  4  5
    return 0;
}
