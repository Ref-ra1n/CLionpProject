#include <stdio.h>

int main() {
   /* int condition = '\0';
    if(condition){
        printf("true\n");
    } else{
        printf("false\n");
    }*/
  /* int a = 1,b = 2,c = 3;
    printf("a < b < c is %d\n",a < b < c);*/
    int a = 2,b = 1,c = 2;
    printf("a == b < c is %d\n",a == b < c);
    printf("(a == b) < c is %d\n",(a == b) < c);
    return 0;
}
