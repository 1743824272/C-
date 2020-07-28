#include <stdio.h>
#include <malloc.h>

//返回值不可改变
const int* function()
{
    static int count = 0;       //静态变量
    count++;
    return &count;              //返回count的地址
}

int main()
{
    int i = 0;
    const int *p = function();  //必须用const修饰的变量才能接收的了const返回值
    printf("%d\n",*p);
    printf("%d\n",i);
    return 0;
}