#include <stdio.h>

int main() {
    char ch1,ch2;
    ch1 = getchar();
    ch2 = getchar();
    printf("ch1 = %c,ch2 = %c\n",ch1,ch2);
    //ab ->ch1 = a,ch2 = b
    //a b ->ch1 = a,ch2 =
    return 0;
}
