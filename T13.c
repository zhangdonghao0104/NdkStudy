#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * 文件解密
 * @return
 */
int main() {

    char *fileNameStr = "D:\\jono\\temp\\yingbao_encode.jpg";//加密的目标
    char *fileNameStrDecode = "D:\\jono\\temp\\yingbao_decode.jpg";//加密的目标
    FILE *file = fopen(fileNameStr, "rb");
    FILE *fileEncode = fopen(fileNameStrDecode, "wb");//创建一个0kb的文件
    if (!file || !fileEncode) {
        printf("wenjianfuzhishibai");
        exit(0);
    }

    //加密思路：破坏文件
    //解密思路：还原文件
    int c;//接受读取的值
    //fgetc:返回值 eof：end of file
    while ((c = fgetc(file))!=EOF  ) {
        fputc(c ^ 5, fileEncode);//写入到fileEncode D:\jono\temp\yingbao_encode.jpg
    }
    fclose(file);
    fclose(fileEncode);

    return 0;

}


