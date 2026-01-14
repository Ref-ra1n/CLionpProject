#include <stdio.h>
#include <string.h>
int main() {
    char str[10];
/*    scanf("%s",str);//str是一个数组，作为参数传递会退化为指针
    printf("str = %s\n",str);*/
    //how are you  --->  str = how

/*    fgets(str,20,stdin);
    printf("str = %s\n",str);//会保留换行符，有两行空行*/
    fgets(str,10,stdin);
    int idx = strlen(str) -1;
    if(str[idx] == '\n'){
        str[idx] = '\0';
    }//将最后的换行符替换为空
    printf("str = %s\n",str);
    //how are you -->str = how are y
    return 0;
}
