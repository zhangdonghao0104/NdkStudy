#include <stdio.h>

int mainT2() {


    int num = 100;
    int * num_p = &num;//ȡ��num���ڴ��ַ��num_p
    int ** num__pp=& num_p;//ȡ��num_p���ڴ��ַ��num_pp  ����ָ��
    printf("num_p��ֵ��%p,num_pp��ֵ��%p\n",num_p,num__pp);
    printf("num__pp���ֵ%d\n",**num__pp);
    printf("num__p���ֵ%d\n",*num_p);


    return 0;
}
