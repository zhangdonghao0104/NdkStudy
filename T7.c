#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

struct People {
    char *name;
    char sex;
    int age;
} ppp = {"zdh", 'n', 25};

int maint7() {
    struct People people;
//    strcpy(people.name, "zdh");
//    people.age = 25;
//    people.sex = 'N';
    printf("¥Ú”°:name:%s,age:%d,sex:%c\n", ppp.name, ppp.age, ppp.sex);

    return 0;

}


