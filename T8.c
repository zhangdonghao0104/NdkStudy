#include <stdio.h>
#include <string.h>

struct Cat {
    char name[10];
    int age;
};

int mainT8() {

    //结构体
    struct Cat cat = {"小花猫", 4};

    //结构体指针
    struct Cat *catp = &cat;
    //->箭头代表调用一级指针
    catp->age = 2;
    strcpy(catp->name, "老猫");
    printf("打印:name:%s,age:%d\n", catp->name, catp->age);

    return 0;

}


