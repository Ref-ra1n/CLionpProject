#include <stdio.h>
void func(int x){
    if(x<1){
        printf("%d\n",x);
    } else if(x >= 10){
        x = 3*x-11;
        printf("%d\n",x);
    } else{
        x=2*x -1;
        printf("%d\n",x);
    }
}
int main() {
    int x;
    scanf("%d",&x);
    func(x);
    return 0;
}
