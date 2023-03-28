#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * ±ğÃû
 */
struct Worker_ {
    char name[10];
    int age;
    char sex;
};

typedef struct Worker_ *Worker;

int mainT10() {
    Worker worker = malloc(sizeof(Worker));

    return 0;

}


