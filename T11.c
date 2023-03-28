#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * 操作文件
 * @return
 */
int mainT11() {


    /**
     * 文件读
     */
    char * fileNameRead = "D:\\jono\\temp\\testplus.txt";
    FILE * fileRead = fopen(fileNameRead,"r");
    if(!fileRead){
//        printf("wenjiandakaishibaislujing");
        exit(0);
    }
    //定义缓冲区
    char  buffer[10] ={0};
    while (fgets(buffer,10,fileRead)){
//        printf("zhongwen读取%s",buffer);
    }
    fclose(fileRead);


    /**
     * 文件写
     */
    char * fileName = "D:\\jono\\temp\\testw.txt";
    FILE * file = fopen(fileName,"w");
    if(!file){
//        printf("wenjiandakaishibaislujing");
        exit(0);
    }
    fputs("zhangdh",file);
    fclose(file);

    /**
     * 文件复制-复制testw
     */

    char * fileNameCopy = "D:\\jono\\temp\\testcopy.txt";

    //rb读取二进制数据
    FILE * fileCopy = fopen(fileName,"rb");
    if(!fileName || !fileNameCopy){
        printf("wenjianfuzhishibai");
        exit(0);
    }
    char  bufferCopy[514] ={0};
    int len ;


    //文件大小的读取
    FILE * fileTotal = fopen(fileName,"rb");
    if(!fileName){
        printf("wenjianfuzhishibai");
        exit(0);
    }
    fseek(fileTotal,0,SEEK_END);
    long fileSize = ftell(fileTotal);
    printf("wenjiandaxiaode%ld\n",fileName,fileSize);
    return 0;

}


