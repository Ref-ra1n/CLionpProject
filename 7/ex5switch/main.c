#include <stdio.h>

int main() {
   /* int i = 1;
    switch (i) {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
            break;
        default:
            printf("default!\n");
    }*/
   int year,mon;
    scanf("%d%d",&year,&mon);
    int dom;
    switch (mon) {
        case 1:case 3:case 5:case 7:
        case 8:case 10:case 12:
            dom = 31;
            printf("dom = %d",dom);
            break;
        case 4:case 6:case 9:case 11:
            dom = 30;
            printf("dom = %d",dom);
            break;
        case 2:
            dom = 28 + (year%4==0 && year%100!=0 || year%400==0);
            printf("dom = %d",dom);
            break;
        default:
            printf("error!");
    }
    return 0;
}
