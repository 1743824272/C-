#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
/*

��Ŀ����һ�����У����е���Ȼ��������ż������ʽ���֣�ֻ��һ����Ȼ�����ֵĴ���������������д�����ҳ������Ȼ����

*/


//ʵ��Aͬѧ�㷨

//��Ϊ��Ҫ��������̫�ķ�ʱ��
/*
int main()
{
    int arr[11] = {1, 4, 6, 8, 6, 1, 1, 2, 8, 2, 4};
    int i=0, j=0;
    int size = (sizeof(arr) / sizeof(arr[0]))-1;
    int flag = 1;
    //��������ͬ��������һ��
    for (i = 0; i < size ; i++)
    {
        flag = 1; //���ñ�־λ���Ż�ð��
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //��λ������ܴ��ӿ������ٶȣ���ʡ�ռ�
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
                
                flag = 0;
            };
        }
    }
    //����
    for (i = 0; i < size; i++)
    {
        flag = 1;
        if(arr[i]==arr[i+1])
        {
            flag++;
        }else
        {
            //���������
            if((flag%2)!=0)
            {
                printf("���������ε���Ȼ���ǣ�%d\n",arr[i]);
            }else
            {
                flag = 1;
            }
        }
    }
}

*/


//ʵ��Bͬѧ�㷨

//��Ȼ��Aͬѧ�������Ч������forѭ��������Ҳ��Aͬѧռ�ø�����ڴ�
/*
//pΪ��ʼ������vΪĬ��ֵ��sizeΪ��С
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
    int a[11] = {1,  -4, 6, 8, 6, 1, 1, 2, 8, 2, -4};
    int i = 0;
    int size = sizeof(a) / sizeof(a[i])-1;
    int max = a[0];
    int *b = NULL;
    //���������ҵ����ֵmax
    for (i = 1; i < size; i++)
    {
        if(max>=a[i])
        {
            max = a[i];
        }
    }
    //��̬����max��int����b
    b = (int*)malloc(sizeof(int) * (max+1));
    //��������ֵ����Ϊ0
    my_memset(b,0,size);
    //����ԭ���飬����һ�ξͼ�һ
    for (i = 0; i < size; i++)
    {
        b[a[i]]++;
    }
    for (i = 0; i < max+1; i++)
    {
        if(b[i]%2!=0)
        {
            printf("���������ε���Ȼ���ǣ�%d\n",a[i]);
        }
    }
}
*/


//�ð�λ�����ʵ���㷨�����Ž⣩

//�����ַ������������������Ҳ�ǳ��Ľ�ʡ�ռ䡣
//��Ϊλ���������ѧ���������Ч����ߣ����Ҳʮ�ֽ�ʡʱ�䡣
/**/
int main()
{
    int a[11] = {1,-4, 6, 8, 6, 1, 1, 2, 8, 2, -4};
    int i = 0;
    //��������ĳ���
    int size = sizeof(a) / sizeof(a[0]);
    int temp = 0;
    //��ÿ�����������������ͬ�������໥������ʣ�µ�һ�������������γ��ֵ���
    for (i = 0; i < size; i++)
    {
        temp = temp ^ a[i];
    }
    printf("���������ε���Ȼ���ǣ�%d\n",temp);
}