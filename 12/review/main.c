#include <stdio.h>
//输入一行字符串，将其中的小写字母转成大写字母
int main() {
    char ch;
    while (scanf("%c",&ch),ch !='\n'){
        if(ch >= 'a' && ch <= 'z'){
            ch -= 32;
        }
        printf("%c\n",ch);
    }
    printf("\n");
    return 0;
}