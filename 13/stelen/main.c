#include <stdio.h>
#include <string.h>
int main() {
    char str[10] = "hello";
    printf("strlen(str) = %zu,sizeof(str) = %zu\n", strlen(str), sizeof(str));
    return 0;
}
