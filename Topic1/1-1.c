/*
1.sizeof�ǿ��Է���Ŀ����ռ�ڴ�Ĵ�С
2.sizeof���Ǻ�������һ��������
3.sizeof�����ö������������������Ҳ�����Ǳ�����
4.typedef�������Ǹı��Լ������������͵�����

*/

#include <stdio.h>

typedef int mop;
typedef char name;
typedef struct _demo{
    mop aa;
    name b;

} information;


int main()
{
    information c;
    name s ;
    mop i = 0;
    
    printf("%d, %d\n", (int)sizeof(information), (int)sizeof(c));
    printf("%d, %d\n", (int)sizeof(name), (int)sizeof(s));
    printf("%d, %d\n", (int)sizeof(mop), (int)sizeof(i));
    
    return 0;
}

