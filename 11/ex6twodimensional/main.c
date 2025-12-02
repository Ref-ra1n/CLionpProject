#include <stdio.h>
void func(int arr[2][3]){
    //二维数组作为参数传递只丢失了行数的信息
    //可以写 int arr[][3]
    for (int i = 0; i < 2; ++i) {//遍历每一行
        for (int j = 0; j < 3; ++j) {//遍历每一列
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    /*二维数组方式初始化
    int arr[2][3] = {{1,2,3},{4,5,6}};*/

    /*一维数组方式初始化
    int arr[2][3] = {1,2,3,4,5,6};*/

    //int arr[2][3] = {{1,2},{3,4}};
   /* 1,2,0
    3,4,0*/
    /*int arr[2][3] = {1,2,3,4};
    1,2,3
    4,0,0*/
    int arr[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; ++i) {//遍历每一行
        for (int j = 0; j < 3; ++j) {//遍历每一列
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");
    func(arr);
    return 0;
}
