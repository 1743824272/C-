//const修饰变量
#include <stdio.h>
#include <malloc.h>

int main()
{
    //const修饰的的吧变量a
    const int a = 1;

    //p是指向a地址的指针
    int *p = (int *)&a;

    //此处如果是直接修改的话是报错的
    //a = 3;

    printf("%d\n",a);

    //因为const修饰的本质还是变量可以通过指针直接访问内存去修改值
    *p = 5;

    //此处虽然可以改变a的值但是输出出来还是原来的值（因为现在使用的是g++编译器，老式的编译器比如gcc就是可以改变的）
    printf("%d\n",a);

    return 0;
} 