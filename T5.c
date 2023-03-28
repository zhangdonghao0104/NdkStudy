#include <stdio.h>

void callBackMethod(char *fileName, int current, int total) {
    printf("图片压缩的进度:%d\n", fileName, current, total);
}

/**
 * 定义函数指针
 * 规则：返回值（*名称）（int,double）
 */
void compress(char * fileName,void (*callBackP)(char *,int ,int )){
    callBackP(fileName,5,10);
}


int main6() {

    void (*call)(char *,int ,int );
    call = callBackMethod;

    compress("zdh.png",call);

    return 0;
}
