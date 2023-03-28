#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[14];
    int age;
};

int mainT9() {

    struct Student student[5] = {
            {"小明", 24},
            {"小红", 18},
            {"小兰", 18},
            {}
    };

    struct Student s1 = {"小光", 9};
    student[4] = s1;


    printf("打印:name:%s,age:%d\n", student[4].name, student[4].age);

    /**
     * 堆区 动态范畴
     */

    struct Student *structStudent = malloc(sizeof(struct Student) * 4);
    strcpy(structStudent->name,"小黑子");
    structStudent->age = 1;

    printf("打印动态开辟:name:%s,age:%d\n", structStudent->name, structStudent->age);
    //释放(必须！！！！！)
    free(structStudent);
    structStudent =NULL;

    return 0;

}


