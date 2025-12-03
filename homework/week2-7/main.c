#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    // 声明数组存储所有数据（假设 T <= 1000，可按需调整）
    int a1[1000], a2[1000], a3[1000];
    int b1[1000], b2[1000], b3[1000];

    // 第一步：读入所有 T 组数据
    for (int i = 0; i < T; ++i) {
        scanf("%d %d %d", &a1[i], &a2[i], &a3[i]);
        scanf("%d %d %d", &b1[i], &b2[i], &b3[i]);
    }

    // 第二步：逐组判断并输出
    for (int i = 0; i < T; ++i) {
        if (a1[i] > b1[i]) {
            printf("First\n");
        } else if (a1[i] < b1[i]) {
            printf("Second\n");
        } else {
            if (a2[i] > b2[i]) {
                printf("First\n");
            } else if (a2[i] < b2[i]) {
                printf("Second\n");
            } else {
                if (a3[i] > b3[i]) {
                    printf("First\n");
                } else if (a3[i] < b3[i]) {
                    printf("Second\n");
                } else {
                    printf("Same\n");
                }
            }
        }
    }

    return 0;
}