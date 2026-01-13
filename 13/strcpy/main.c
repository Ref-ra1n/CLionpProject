#include <stdio.h>
#include <string.h>
int main() {
    char to[3];
   /* int x = 12345;
    char from[10] = "excellent";
    strcpy(to,from);
    printf("to = %s\n",to);
    printf("x = %d\n",x);
    //输出to = excellent  x = 1701604453*/
   char from[20] = "very very long string";
    strcpy(to,from);
    printf("to = %s\n",to);
    //输出 to = very very long strin
    return 0;
}
