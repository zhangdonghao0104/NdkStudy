#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int getLen(char *str) {

    int count = 0;
    while (*str) {
        str++;
        count++;
    }
    return count;
}

int mainT6() {
    char str[] = {'z', 'd', 'h', '\0'};

    int leg = getLen(str);

    int leg2 = sizeof(str) / sizeof(int);
    printf("������:%d\n", leg2);

    /**
     * �ַ�����ת��
     */
    char *num = "1";
    num = "12.659";
    int result = atoi(num);
    if (result) {
        printf("ת���ɹ�:%d", result);
    } else {
        printf("ת��ʧ��:%d", result);
    }
    double result2 = atof(num);
    printf("ת��double�ɹ�:%lf\n", result2);
    /**
     * �ַ����ıȽ�
     */
    char *string1 = "zdh";
    char *string2 = "sasdfasd";
    int is = strcmp(string1, string2);
    if (!is) {
        printf("���");
    } else {
        printf("�����\n");
    }
    /**
     * �ַ����Ƚ�
     */
    char *name1 = "name is zdh";
    char *name2 = "z";
    char *content = strstr(name1, name2);
    if (content) {

        printf("�ҵ��� name��:%s\n",content);
    } else {

        printf("û�ҵ�\n");
    }
    char box[25];
    char *blank = "--��--",*CPP="C++",*Java = "java";
    strcpy(box,CPP);
    strcat(box,blank);
    strcat(box,Java);
    printf("ƴ�Ӻ�Ľ��:%\n",box);


    return 0;
}
