#include <stdio.h>
#include <string.h>

struct Cat {
    char name[10];
    int age;
};

int mainT8() {

    //�ṹ��
    struct Cat cat = {"С��è", 4};

    //�ṹ��ָ��
    struct Cat *catp = &cat;
    //->��ͷ�������һ��ָ��
    catp->age = 2;
    strcpy(catp->name, "��è");
    printf("��ӡ:name:%s,age:%d\n", catp->name, catp->age);

    return 0;

}


