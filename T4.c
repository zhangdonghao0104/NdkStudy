#include <stdio.h>

/**
 * 操作函数指针
 * @return
 */

void add(int num1, int num2) {
    printf("num1 + num2 = %d\n", (num1 + num2));
}

void mins(int num1, int num2) {
    printf("num1 - num2 = %d\n", (num1 - num2));
}

//(*method):函数的指针
void opreate(void (*method)(int, int), int num1, int num2) {
    method(num1, num2);
}

int mainT4() {

    opreate(add, 10, 20);
    opreate(mins, 90, 20);
    return 0;
}
