
/*
    “&&”运算符从左开始计算，因为只要有假表达式就是假，因此当遇到假时就停止运算
*/

#include <stdio.h>

int g = 0;

int f()
{
    return g++;
}

int main()
{
    if( f() && f() )
    {
        printf("%d\n", g);
    }
    
    printf("%d\n", g);
    
    return 0;
}
