#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * �ļ��ӽ���
 * @return
 */
int mainT12() {

    char *fileNameStr = "D:\\jono\\temp\\yingbao.jpg";//��Դ
    char *fileNameStrEncode = "D:\\jono\\temp\\yingbao_encode.jpg";//���ܵ�Ŀ��
    FILE *file = fopen(fileNameStr, "rb");
    FILE *fileEncode = fopen(fileNameStrEncode, "wb");//����һ��0kb���ļ�
    if (!file || !fileEncode) {
        printf("wenjianfuzhishibai");
        exit(0);
    }

    //����˼·���ƻ��ļ�
    //����˼·����ԭ�ļ�
    int c ;//���ܶ�ȡ��ֵ
    //fgetc:����ֵ eof��end of file
    while ((c = fgetc(file))){
        fputc(c ^ 5 ,fileEncode);//д�뵽fileEncode D:\jono\temp\yingbao_encode.jpg
    }
    fclose(file);
    fclose(fileEncode);

    return 0;

}


