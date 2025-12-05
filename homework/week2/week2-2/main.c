#include <stdio.h>
/*当程序运行时，只要输入年、月，计算机就能显示该月有多少天。
输入
只有一行，是2个用空格隔开的整数：year,month。
输出
共一行，输出3个整数,用-连接。Year-month-days*/
int main() {
    int year,mon;
    scanf("%d %d",&year,&mon);
    switch (mon) {
        case 1:case 3:case 5:case 7:
        case 8:case 10:case 12:
            printf("%d-%d-31",year,mon);
            break;
        case 4:case 6:case 9:case 11:
            printf("%d-%d-30",year,mon);
            break;
        case 2:
            printf("%d-%d-%d",year,mon,
                   28 + ((year%4 == 0 && year%100 != 0) || (year%400 ==0)));

    }
    return 0;
}
