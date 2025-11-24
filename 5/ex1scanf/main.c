#include <stdio.h>

int main() {
   /* int i;//用来存放从stdin过来的数据
    int ret = scanf("%d",&i);
    //%d是一个控制符，用来说将要接收的数据是整数
    //&i 将数据存入i的地址当中，&符号取地址，不可省略
    printf("ret = %d,i = %d\n",ret,i);
    return 0;*/
    /*int i;
    char ch;
    scanf("%d%c",&i,&ch);
    printf("i = %d,ch = %c",i,ch);//123a-->i = 123,ch = a
    //123a全部放入了缓冲区，i先读取了123，读到a不是int类型，然后ch读取a
    return 0;*/
    int i;
    char ch;
    scanf("%d %c",&i,&ch);//%c前的空格，可以让%c忽略前面的空白（空格和换行）
    printf("i = %d,ch = %c",i,ch);
    return 0;
}
