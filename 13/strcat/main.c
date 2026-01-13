#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "how";
    char str2[] = "ever";
    strcat(str1,str2);
    printf("str1 = %s\n",str1);
    return 0;
}
