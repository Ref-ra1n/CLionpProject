#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    /*scanf("%s",str);//str是一个数组，作为参数传递会退化为指针
    printf("str = %s\n",str);
    //how are you  --->  str = how*/

    fgets(str,20,stdin);
    int idx = strlen(str) -1;
    if(str[idx] == '\n'){
        str[idx] = '\0';
    }
    printf("str = %s\n",str);//会保留换行符，有两行空行
    return 0;
}
