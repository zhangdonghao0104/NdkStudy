#include <stdio.h>

void change(int* i);
//��������д��main���棬����д��ǰ�棬��������������ʵ��
int mainT1() {
    int i = 100;

    change(&i);
    printf("�ڴ��ַ=%d\n",i);

    return 0;

}

//�������� �Ὺ���µ��ڴ��ַ
void change(int *i) {
    printf("change�ڴ��ַ=%p\n",&i);
    //*����˼:ȡ��i���ڴ��ַ��Ӧ��ֵ���޸ĳ�666
    *i = 666;
}
