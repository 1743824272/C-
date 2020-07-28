/*
����voidָ���һЩ��������д�Լ��ĳ�ʼ������memset
memset�����������ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ��ͨ��Ϊ��������ڴ�����ʼ��������

*/
#include<stdio.h>
//���������ǽ���һ��ָ�루�������������͵����ݣ�һ��Ĭ��ֵ����һ���ߴ�ֵ
//�ߴ�ֵӦ���Ǹ��������������Ԫ�ظ����������һ����������1
void* my_memset(void* p,char v ,int size)
{
    void* ret = p;               //retΪ��ʼ�����󣨿������������͵ģ�

    char* dest = (char *)p;      //ת��Ϊchar����ָ��
    
    int i = 0;
    
    for (i = 0; i < size;i++)
    {
        dest[i] = v;             //��ֵΪĬ��ֵ
    }
    
    return ret;                  //����
}

int main()
{
    int i = 0;
    int a[5] = {1, 2, 3, 4, 5};
    
    for (i = 0; i < 5 ; i++)
    {
        printf("%d\n",a[i]);
    }

    int size = sizeof(a) / sizeof(a[0]);

    my_memset(a,0,size);    //���������������һ��Ԫ�صĵ�ַָ��
    
    for (i = 0; i < 5 ; i++)
    {
        printf("%d\n",a[i]);
    }
    
    int l = 123123123;
    
    my_memset(&l,0,1);
    
    printf("%d\n",l);
    
    return 0;
}