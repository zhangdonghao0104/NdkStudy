#include <stdio.h>

void callBackMethod(char *fileName, int current, int total) {
    printf("ͼƬѹ���Ľ���:%d\n", fileName, current, total);
}

/**
 * ���庯��ָ��
 * ���򣺷���ֵ��*���ƣ���int,double��
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
