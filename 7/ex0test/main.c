#include <stdio.h>

// 此函数运行结果不符合预期，需要找出bug
void print_rectangle(int line, int column) {
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            printf("#");
        }
        printf("\n");
    }
}

void test(void){
    printf("test!\n");
    printf("test!\n");
    printf("test!\n");
}

int main(void) {
    printf("hello world!\n");
    test();

    int a = 10;
    int b = 20;
    int sum = a + b;

    printf("please type an int : ");
    int c;
    scanf("%d", &c);
    if (c > 0){
        printf("the number is bigger than 0!\n");
    }else if (c < 0) {
        printf("the number is smaller than 0!\n");
    }else{
        printf("the number is 0!\n");
    }

    printf("next is to print a rectangle ,please type the line and the column: \n");

    int line;
    int column;
    scanf("%d", &line);
    scanf("%d", &column);
    print_rectangle(line,column);

    return 0;
}