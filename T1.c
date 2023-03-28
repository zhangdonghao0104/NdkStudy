#include <stdio.h>

void change(int* i);
//函数不能写在main后面，必须写在前面，或者先声明，再实现
int mainT1() {
    int i = 100;

    change(&i);
    printf("内存地址=%d\n",i);

    return 0;

}

//方法函数 会开辟新的内存地址
void change(int *i) {
    printf("change内存地址=%p\n",&i);
    //*号意思:取出i的内存地址对应的值，修改成666
    *i = 666;
}
