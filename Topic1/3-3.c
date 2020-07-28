/*

do break 的妙用：
    函数设计时的基本的三个步骤：
        1.分配资源（分配内存）。
        2.执行函数语句。
        3.释放资源退出函数。
    用do while 结构和break语句相配合就能做到统一地释放资源防止内存泄露。
    do while起到一个块的作用，将一部分整合在一起
    break的作用提前结束循环，防止多重执行

内存泄漏（Memory Leak）是指程序中己动态分配的堆内存由于某种原因程序未释放或无法释放，造成系统
内存的浪费，导致程序运行速度减慢甚至系统崩溃等严重后果。

为什么要考虑分配资源和释放资源？
    初学时我们大部分都用的栈区的内存（栈区存放函数参数值局部变量，由编译器自动分配释放资源），
    但是栈区的资源是有限的而且并不是内存的主要部分，堆区的内存比栈区的大很多，所以要尽量使用堆
    区，堆区是由程序员自己分配释放资源[动态内存申请(malloc)与释放(free)]，若是程序员不释放，在
    程序结束后可能由操作系统回收。

至于堆区、栈区是啥请看专题一-二.5

*/

#include <stdio.h>
#include <malloc.h>

int func(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n);
    
    do
    {
        if( NULL == p ) break;
        
        if( n < 0 ) break;
        
        for(i=0; i<n; i++)
        {
            p[i] = i;
            printf("%d\n", p[i]);
        }
        
        ret = 1;
    }while(0);
    
    free(p);
    
    return ret;
}

int main()
{
    if( func(10) )
    {
        printf("OK");
    }
    else
    {
        printf("ERROR");
    }
}