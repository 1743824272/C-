#include <stdio.h>
#include <malloc.h>

//����ֵ���ɸı�
const int* function()
{
    static int count = 0;       //��̬����
    count++;
    return &count;              //����count�ĵ�ַ
}

int main()
{
    int i = 0;
    const int *p = function();  //������const���εı������ܽ��յ���const����ֵ
    printf("%d\n",*p);
    printf("%d\n",i);
    return 0;
}