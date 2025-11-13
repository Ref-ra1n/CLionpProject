#include <stdio.h>

int main() {
    char  ch ;
    //ch  = '\n';
    //ch = '\r';//xyz
    //ch = '\b';//abxyz
    //ch = '\t';//abc     xyz
    ch = '\\';//abc\xyz
    printf("abc%cxyz\n",ch);
    return 0;
}
