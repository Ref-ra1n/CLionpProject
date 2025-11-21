#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    //用空格分隔，可以忽略空白字符，用逗号会强制输入逗号分隔
    if(a>b){
        if(a>c){
            printf("a is max,a = %d\n",a);
        } else{
            printf("c is max,c = %d\n",c);
        }
    } else{
        if(b>c){
            printf("b is max,b = %d\n",b);
        } else{
            printf("c is max,c = %d\n",c);
        }
    }
    return 0;
}
