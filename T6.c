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
    printf("长度是:%d\n", leg2);

    /**
     * 字符串的转换
     */
    char *num = "1";
    num = "12.659";
    int result = atoi(num);
    if (result) {
        printf("转换成功:%d", result);
    } else {
        printf("转换失败:%d", result);
    }
    double result2 = atof(num);
    printf("转换double成功:%lf\n", result2);
    /**
     * 字符串的比较
     */
    char *string1 = "zdh";
    char *string2 = "sasdfasd";
    int is = strcmp(string1, string2);
    if (!is) {
        printf("相等");
    } else {
        printf("不相等\n");
    }
    /**
     * 字符串比较
     */
    char *name1 = "name is zdh";
    char *name2 = "z";
    char *content = strstr(name1, name2);
    if (content) {

        printf("找到了 name是:%s\n",content);
    } else {

        printf("没找到\n");
    }
    char box[25];
    char *blank = "--到--",*CPP="C++",*Java = "java";
    strcpy(box,CPP);
    strcat(box,blank);
    strcat(box,Java);
    printf("拼接后的结果:%\n",box);


    return 0;
}
