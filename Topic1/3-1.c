/*
ѡ����䣺
    if:
        1.����ͨ������0ֵ���бȽ�ʱ0ֵӦ�ó����ڱȽϷ�����ߡ������ֱ�дϰ�߲����׳���������Ҳ�ȽϺ��ң���Ϊ���������̲�һ��
        2.booler���͵ı���Ӧ��ֱ�ӳ����������У���Ҫ���бȽϡ�
        3.float���ͱ�������ֱ�ӽ���0ֵ�Ƚϣ���Ҫ���徫�ȡ�

    switch:
        4.case ����е�ֵֻ�������λ��ַ��͡�
        5.case ��������������������ǰ�棬�쳣����ź��档����ĸ���������С�default���ֻ���ڴ���������Ĭ�������

    if �� switch ���õĲ�ͬ�����
        if���á���Ƭ�������жϡ��������Ƿ�����������ѡ����д���飩
        switch�����ڶ���ɢֵ���зֱ��жϡ�
        if��������ȫ�ܵģ�switch����ɢ�ġ�
        ���֧�ж���switch���ӵļ�ࡣ

*/
#include <stdio.h>
#include <stdlib.h>

int func (int n )
{
    int i = 0;

    int ret = 0;
    
    int *p = (int *)malloc(sizeof(int) * n);
    
    //���do while ������һ����һ��������ý��ж�ִ�з���һ��
    do
    {
        if(NULL == p)
            break;
        if(n<0)
            break;
        for (i = 0; i < n;i++)
        {
            p[i] = i;
            printf("%d\n",p[i]);
        }
    } while (0);
    
    //Ȼ����ͳһ���ͷ���Դ
    free(p);

    return ret;
    
}

void f1(int i)
{
    if( i < 6 )
    {
        printf("Failed!\n");
    }
    else if( (6 <= i) && (i <= 8) )
    {
        printf("Good!\n");
    }
    else
    {
        printf("Perfect!\n");
    }
}

void f2(char i)
{
    switch(i)
    {
        case 'c':
            printf("Compile\n");
            break;
        
        case 'd':
            printf("Debug\n");
            break;
        
        case 'o':
            printf("Object\n");
            break;
            
        case 'r':
            printf("Run\n");
            break;
        
        default:
            printf("Unknown\n");
            break;
            
    }
}

int main()
{
    f1(5);
    f1(9);
    
    f2('o');
    f2('d');
    f2('e');
}