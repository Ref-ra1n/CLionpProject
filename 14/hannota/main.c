#include <stdio.h>
/*现有n个从小到大排列的圆盘，以及三根柱子a,b,c,
我们需要将a上的圆盘全部移动到另一个柱子c上，并遵守以下规则：
1.每次只能移动一个圆盘
2.移动过程中大盘不能放在小盘上面
3.只能移动最顶端的圆盘*/
void hanoi(int n,char from,char buffer,char to){
    if(n > 1){
        hanoi(n-1,from,to,buffer);
        //将n-1个盘子 由A移动到B
        hanoi(1,from,buffer,to);
        //将第n个盘子 由A移动到C
        hanoi(n-1,buffer,from,to);
        //再将B上面的n-1个盘子 从B移动到C
    } else if(n == 1){
        printf("move %c to %c\n",from,to);
    }
}
int main() {
    int n = 5;
    hanoi(5,'a','b','c');
    return 0;
}
