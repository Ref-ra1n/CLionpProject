#include <stdio.h>
/*编写程序，计算下列分段函数y=f(x)的值。
当0<= x <2，y= -x+2.5；
当2<= x <4，y=2-1.5(x-3)(x-3)；
当4<= x <6，y=x/2-1.5；
Input
输入第一行为整数m表示样例数，接下来有m行每行一个整数x。
Output
输出m行分别表示对应的y值，保留小数点后一位小数。*/
void func(int x){
    float y;
    if(x>=0 && x<2){
        y= -x+2.5;
        printf("y=%.1f\n",y);
    } else if(x>=2 && x<4){
        y=2.0-1.5*(x-3)*(x-3);
        printf("y=%.1f\n",y);
    } else if(x>=4 && x<6){
        y=x/2.0-1.5;
        printf("y=%.1f\n",y);
    }
}
int main() {
    int m,x;
    scanf("%d",&m);
    for (int i = 0; i < m; ++i) {
        scanf("%d",&x);
        func(x);
    }
    return 0;
}
