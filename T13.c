#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * �ļ�����
 * @return
 */
int main() {

    char *fileNameStr = "D:\\jono\\temp\\yingbao_encode.jpg";//���ܵ�Ŀ��
    char *fileNameStrDecode = "D:\\jono\\temp\\yingbao_decode.jpg";//���ܵ�Ŀ��
    FILE *file = fopen(fileNameStr, "rb");
    FILE *fileEncode = fopen(fileNameStrDecode, "wb");//����һ��0kb���ļ�
    if (!file || !fileEncode) {
        printf("wenjianfuzhishibai");
        exit(0);
    }

    //����˼·���ƻ��ļ�
    //����˼·����ԭ�ļ�
    int c;//���ܶ�ȡ��ֵ
    //fgetc:����ֵ eof��end of file
    while ((c = fgetc(file))!=EOF  ) {
        fputc(c ^ 5, fileEncode);//д�뵽fileEncode D:\jono\temp\yingbao_encode.jpg
    }
    fclose(file);
    fclose(fileEncode);

    return 0;

}


