#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[14];
    int age;
};

int mainT9() {

    struct Student student[5] = {
            {"С��", 24},
            {"С��", 18},
            {"С��", 18},
            {}
    };

    struct Student s1 = {"С��", 9};
    student[4] = s1;


    printf("��ӡ:name:%s,age:%d\n", student[4].name, student[4].age);

    /**
     * ���� ��̬����
     */

    struct Student *structStudent = malloc(sizeof(struct Student) * 4);
    strcpy(structStudent->name,"С����");
    structStudent->age = 1;

    printf("��ӡ��̬����:name:%s,age:%d\n", structStudent->name, structStudent->age);
    //�ͷ�(���룡��������)
    free(structStudent);
    structStudent =NULL;

    return 0;

}


