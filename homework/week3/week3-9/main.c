#include <stdio.h>
/*编写函数distance，计算两点间的距离。
函数原型如下：
double  distance(int x1, int y1, int x2, int y2);
其中x1、y1及x2、y2分别为P、Q两点的坐标，即P(x1,y1)、Q(x2,y2)。假设坐标点单位均为整数。
函数返回值为PQ两点间的距离。
从键盘上输入一下正整数n(2<=n<=10),然后依次输入n个点的坐标。再依次计算这n个点间的n-1条折线的距离之和，并输出。输出结果保留两位小数。
如：输入3 5 8 3 5 8 4，则代表3个点分别为R(5,8)、 S（3,5)、 T(8,4)。计算并输出RS及ST的距离和。
补充：
 //求平方根的函数是sqrt
  #include <math.h>
  double sqrt( double num );
Input
先输入一个正整数n，说明数据的组数，然后再输入2n个整数，代表n个点的坐标
Output
依次计算第1点到第2点、第2点到第3点......第n-1点到第n点之间的距离并求和，结果保留两位小数。*/
#include <math.h>
double sqrt( double num );

double  distance(int x1, int y1, int x2, int y2){
    double dst;
    dst = sqrt((x1*1.0-x2*1.0)*(x1*1.0-x2*1.0)
            + (y1*1.0-y2*1.0)*(y1*1.0-y2*1.0));
    return dst;
}
int main() {
    int n,x,y;
    double sum =0.0;
    scanf("%d",&n);
    int arr[2*n];
    for (int i = 0; i < 2*n; i+=2) {
        scanf("%d %d",&x,&y);
        arr[i] = x;
        arr[i+1] = y;
    }
    for (int i = 0; i < 2*n-3; i+=2) {
        sum += distance(arr[i],arr[i+1],arr[i+2],arr[i+3]);
    }
    printf("%.2f",sum);
    return 0;
}
