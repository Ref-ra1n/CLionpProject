#include <stdio.h>
/*首先从键盘输入一个正整数n（代表学生人数），接着输入n个整数（代表这些学生的成绩）。
然后按要求统计并输出各分数段的学生人数，用空格分隔。
各个分数段包括：0-59、60-69、70-79、80-89、90-99、100六个分数段。
输入
首先从键盘输入一个正整数n（代表学生人数），接着输入n个整数（代表这些学生的成绩）。
输出
然后按要求统计并输出各分数段的学生人数，用空格分隔。
各个分数段包括：0-59、60-69、70-79、80-89、90-99、100六个分数段。*/
void classification(int *arr,int n){
    int a=0,b=0,c=0,d=0,e=0,f=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]==100){
            a++;
        } else if(arr[i]<=99 && arr[i]>=90){
            b++;
        } else if(arr[i]<=89 && arr[i]>= 80){
            c++;
        } else if(arr[i]<=79 && arr[i]>=70){
            d++;
        }else if(arr[i]<= 69 && arr[i]>=60){
            e++;
        }else{
            f++;
        }
    }
    printf("%d %d %d %d %d %d",f,e,d,c,b,a);
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    classification(arr,n);
    return 0;
}
