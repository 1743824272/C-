#include <stdio.h>

#line 14 "Hello.c"                      //��˼Ϊ����������Ϊ��14�У��ļ���ΪHello.c

#define CONST_NAME1 "CONST_NAME1"
#define CONST_NAME2 "CONST_NAME2"

void f()
{
    return 0;
}

int main()
{
    printf("%s\n", CONST_NAME1);        
    printf("%s\n", CONST_NAME2);
    printf("%d\n", __LINE__);           //��Ϊ����ѵ�4�ж���Ϊ��14�У���˴��д�ӡ�����к���27     
    printf("%s\n", __FILE__);           //��Ϊ������ļ�������ΪHello.c����˴�ӡ�����ļ�������4-2.c����Hello.c  
    
    f();

    return 0;
}