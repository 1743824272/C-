#include <stdio.h>
#include <malloc.h>

/*

    1.�սṹ��Ĵ�С��ͬ�ı���������ǲ�ͬ�ġ���������Ӧ����0����Ϊ�˷�ֹ��ͬ�����ĵ�ַ����ͬ�Ĵ󲿷���Ϊ1��
    2.�������鼴�����С���������顣

*/

//�ɽṹ��ʵ����������
typedef struct _soft_array
{
    int len;       //���鳤��
    int array[];
}SoftArray;



int main()
{  
    int i = 0;
    SoftArray* sa = (SoftArray*)malloc(sizeof(SoftArray) + sizeof(int) * 10);
    
    sa->len = 10;
    
    for(i=0; i<sa->len; i++)
    {
        sa->array[i] = i + 1;
    }
    
    for(i=0; i<sa->len; i++)
    {
        printf("%d\n", sa->array[i]);   
    }
    
    free(sa);

    union dad
    {
        int a;
        char b;

    }son;

    son.a = 2;

    printf("%d\n",son.b);
    return 0;
}