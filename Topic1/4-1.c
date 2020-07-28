/*
1.不推荐用goto语句，因为goto语句改变了程序的顺序执行地规则，而且有可能跳过一些关键地语句。
2.函数没有返回值时就声明为void类型，没有参数时就声明参数为void。
3.没有void变量，void理论上也没内存大小，但是在一些编译器上会规定，例如gcc上就是为1。
4.void* 指针：作为被赋值方（左值）可以接收任意类型的指针，作为赋值方（右值）赋值给其他指针时需要进行强制类型转换。
5.C语言规定只有相同类型指针才可以相互赋值。（此时就可以利用void指针的特性，来进行一些集中的全能的设置）


*/

#include <stdio.h>

void func(int n)
{
    int* p = NULL;

    if(  n < 0 )
    {
        goto STATUS;
    }

    
    p = malloc(sizeof(int) * n);
    
STATUS:
    p[0] = n;    
}

int main()
{  
    func(1);
    func(-1);
    
    return 0;
}