#include <stdio.h>

int main() {
    int height;
    scanf("%d",&height);
    if(height < 160){
        printf("he is short!\n");
    } else if(height < 185){
        printf("he is middle!\n");
    } else{
        printf("he is tall!\n");
    }
    return 0;
}
