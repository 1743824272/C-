
/*
    “||”运算符从左开始计算，因为只要有真表达式就是真，因此当遇到真时就停止运算
*/

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    
    if( ++i > 0 || ++j > 0 )
    {
        printf("%d\n", i);
        printf("%d\n", j);
    }
    
    return 0;
}
