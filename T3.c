#include <stdio.h>

int mainT3() {


    int arr [] = {1,2,3,4};
    int * arr_p = arr;
    //����ָ��
    int i = 0;
    for (int i = 0; i < 4; ++i) {
//        printf("λ��%d��ֵ��:%p\n",i,(arr_p+i));
    }

    /**
     * �����ָ��ҹ�
     * ������ڴ��ַ=��һ��Ԫ�ص��ڴ��ַ�����ǵ�һ����Ҳ���Ǻ����
     *
     */
//    printf("aar = %p\n",arr);
//    printf("&aaray = %p\n",&arr);
//    printf("&aaray[0] = %p\n",&arr[0]);

    int array [4];
    int * arr_f = arr;

    int j = 0;
    for (int j = 0; j < 4; ++j) {
        /**
         * ȡ����Ԫ�ص��ڴ��ַ��arr_f+j��
         * ȡ��Ԫ�ص��ڴ��ַ��Ӧ��ֵ*��arr_f+j��
         */
        *(arr_f+j) = (j+1000);
    }



    int k = 0;
    for (int k = 0; k < 4; ++k) {

        printf("λ��%d��ֵ��:%d\n",k,*(arr_f+k));
    }

    return 0;
}
