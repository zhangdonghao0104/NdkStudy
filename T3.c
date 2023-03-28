#include <stdio.h>

int mainT3() {


    int arr [] = {1,2,3,4};
    int * arr_p = arr;
    //遍历指针
    int i = 0;
    for (int i = 0; i < 4; ++i) {
//        printf("位置%d的值是:%p\n",i,(arr_p+i));
    }

    /**
     * 数组和指针挂钩
     * 数组的内存地址=第一个元素的内存地址，不是第一个，也不是后面的
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
         * 取出子元素的内存地址（arr_f+j）
         * 取出元素的内存地址对应的值*（arr_f+j）
         */
        *(arr_f+j) = (j+1000);
    }



    int k = 0;
    for (int k = 0; k < 4; ++k) {

        printf("位置%d的值是:%d\n",k,*(arr_f+k));
    }

    return 0;
}
