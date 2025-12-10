#include <stdio.h>
/*已知数组 LA 和 LB 中的数据元素按值非递减有序排列，现要求将 LA 和 LB 归并为一个新的数组 LC，
且 LC 中的数据元素仍然按值非递减有序排列。例如，设LA=(3,5,8,11) ,LB=(2,6,8,9,11,15,20)
则LC=(2,3,6,6,8,8,9,11,11,15,20)
Input
有多组测试数据，每组测试数据占两行。第一行是集合A，第一个整数m（0<=m<=100）代表集合A起始有m个元素，
后面有m个非递减排序的整数，代表A中的元素。第二行是集合B，第一个整数n(0<=n<=100)代表集合B起始有n个元素，
后面有n个非递减排序的整数，代表B中的元素。每行中整数之间用一个空格隔开。
Output
每组测试数据只要求输出一行，这一行含有m+n个来自集合A和集合B中的元素。
结果依旧是非递减的。每个整数间用一个空格隔开。*/
int main() {
    /*int m,n;
    while(scanf("%d",&m)==1){
        int LA[m];
        for (int i = 0; i < m; ++i) {
            scanf("%d",&LA[i]);
        }
        scanf("%d",&n);
        int LB[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d",&LB[i]);
        }
        int LC[m+n];
        for (int i = 0; i < m+n; ++i) {
           if(i<m){
               LC[i]=LA[i];
           } else{
               LC[i]=LB[i-m];
           }
        }
        for (int i = 0; i < m + n; ++i) {
            for (int j = 0; j < m+n-1; ++j) {
                int tep = LC[j];
                if(LC[j]>LC[j+1]){
                    LC[j] = LC[j+1];
                    LC[j+1] = tep;
                }
            }
        }
        for (int i = 0; i < m + n; ++i) {
            if(i == 0){
                printf("%d",LC[i]);
            } else{
                printf(" %d",LC[i]);
            }
        }
        printf("\n");
    }*/
    int i,j,m,n,k;
    int LA[100],LB[100],LC[200];
    while(scanf("%d",&m)==1){
        for (int l = 0; l < m; ++l) {
            scanf("%d",&LA[l]);
        }
        scanf("%d",&n);
        for (int l = 0; l < n; ++l) {
            scanf("%d",&LB[l]);
        }
        i = j = k = 0;
        while ( i<m && j<n) {
            if(LA[i] <= LB[j]){
                LC[k] = LA[i];
                ++k,++i;
            } else{
                LC[k] = LB[j];
                ++k,++j;
            }
        }
        //一个数组已经全部排完，直接按序排入另一个数组
        if(i<m){
            for (; i < m; ++i,++k) {
                LC[k]  = LA[i];
            }
        }
        if(j<n){
            for (; j < n; ++j,++k) {
                LC[k]  = LB[j];
            }
        }
        for (int l = 0; l < m + n; ++l) {
            if(l == 0){
                printf("%d",LC[l]);
            } else{
                printf(" %d",LC[l]);
            }
        }
        printf("\n");
    }
    return 0;
}
