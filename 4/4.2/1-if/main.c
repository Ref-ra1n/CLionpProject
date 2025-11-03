#include <stdio.h>

//练习if与else
int main() {
   int i;
    while (scanf("%d",&i)==1) {
        if (i > 0) {
            printf("i is bigger than 0\n");
        } else{
            printf("i is not bigger than 0\n");
        }
    }
    return 0;
}
