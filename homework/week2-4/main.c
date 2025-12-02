#include <stdio.h>

int main() {
    int t,Y,Q;
    double e,f,g;
    scanf("%d",&t);
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %lf %lf %lf",&Y,&Q,&e,&f,&g);
        printf("%.1f\n",(Y+Y*e/100.0*Q/365.0)*(1.0+g/100.0));
        printf("%.1f\n",Y*(1.0+f/100.0*(Q+365.0)/365.0));
    }
    return 0;
}
