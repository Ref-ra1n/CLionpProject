#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "back";
    char str2[] = "backward";
    char str3[] = "back";
    printf("str1 vs str2 = %d\n",strcmp(str1,str2));
    printf("str2 vs str1 = %d\n",strcmp(str2,str1));
    printf("str1 vs str3 = %d\n",strcmp(str1,str3));
    return 0;
}
