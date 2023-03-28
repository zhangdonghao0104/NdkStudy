#include <stdio.h>

int mainT2() {


    int num = 100;
    int * num_p = &num;//取出num的内存地址给num_p
    int ** num__pp=& num_p;//取出num_p的内存地址给num_pp  二级指针
    printf("num_p的值是%p,num_pp的值是%p\n",num_p,num__pp);
    printf("num__pp输出值%d\n",**num__pp);
    printf("num__p输出值%d\n",*num_p);


    return 0;
}
