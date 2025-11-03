#include <stdio.h>

int main() {
    int i;
    char j;
    float k;
    scanf("%d %c%f",&i,&j,&k);
    float a=(float )i+j+k;
    printf("%0.2f\n",a);
    return 0;
}
