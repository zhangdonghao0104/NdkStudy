#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * �����ļ�
 * @return
 */
int mainT11() {


    /**
     * �ļ���
     */
    char * fileNameRead = "D:\\jono\\temp\\testplus.txt";
    FILE * fileRead = fopen(fileNameRead,"r");
    if(!fileRead){
//        printf("wenjiandakaishibaislujing");
        exit(0);
    }
    //���建����
    char  buffer[10] ={0};
    while (fgets(buffer,10,fileRead)){
//        printf("zhongwen��ȡ%s",buffer);
    }
    fclose(fileRead);


    /**
     * �ļ�д
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
     * �ļ�����-����testw
     */

    char * fileNameCopy = "D:\\jono\\temp\\testcopy.txt";

    //rb��ȡ����������
    FILE * fileCopy = fopen(fileName,"rb");
    if(!fileName || !fileNameCopy){
        printf("wenjianfuzhishibai");
        exit(0);
    }
    char  bufferCopy[514] ={0};
    int len ;


    //�ļ���С�Ķ�ȡ
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


