#include <stdio.h>

int main() {
    int age=21;
    printf("Hello %s,you are %d years old\n","Bob",age);
    int i=10;
    float f=96.3;
    printf("student number = %-3d,score = %5.2f\n",i,f);//"%5.2f":5表示占五个字符，".2"表示保留小数点后两位
    //" %-3d"默认正号，表示右对齐，加负号表示左对齐
    i =100;
    f=98.21;
    printf("student number = %3d,score = %5.2f\n",i,f);
    return 0;
}
