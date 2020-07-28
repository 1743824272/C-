/*
循环语句：
    do{}while():
        先执行后判断。
    while(){}:
        先判断后执行。
    for:
        先判断后执行。

break和continue的区别：
    break表示终止循环执行。
    continue表示终止本次循环体，进入下次循环。

switch 能否用 continue？
    不能用，continue是为循环设计的。
    break的作用是跳出整个块。（块就是花括号括起来的部分）
*/
#include <stdio.h>

int f1(int n)
{
    int ret = 0;
    int i = 0;
    
    for(i=1; i<=n; i++)
    {
        ret += i;
    }
    
    return ret;
}

int f2(int n)
{
    int ret = 0;
    
    while( (n > 0) && (ret += n--) );
    
    return ret;
}

int f3(int n)
{
    int ret = 0;
    
    if( n > 0 )
    {
        do
        {
            ret += n--;
        }while( n );
    }
    
    return ret;
}

int main()
{
    printf("%d\n", f1(10));
    printf("%d\n", f2(10));
    printf("%d\n", f3(10));
}