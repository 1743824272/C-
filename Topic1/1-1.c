/*
1.sizeof是可以返回目标所占内存的大小
2.sizeof不是函数而是一个操作符
3.sizeof的作用对象可以是数据类型名也可以是变量名
4.typedef的作用是改变自己定义数据类型的名称

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

