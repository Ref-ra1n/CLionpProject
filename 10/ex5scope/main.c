
#include <stdio.h>
int a = 1;
void func(){
    int b  = 2;
}
int main() {
    int c = 3;
    {
        int d = 4;
        int a = 2;
        a = 3;
        // a b c d -->acd有效
    }
    //a b c d -->ac有效
    return 0;
}

