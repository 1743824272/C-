/*
extern���������ⲿ����ı����ͺ���

*/

#include <stdio.h>
/* 
extern "C"
{
    int add(int a, int b)
    {
        return a + b;
    }
}
*/

extern int g;
extern int get_min(int a, int b);

int main()
{
    printf("%d\n",g);
    printf("%d\n",get_min(1,5));
    return 0;
}

