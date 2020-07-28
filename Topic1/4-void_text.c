/*
利用void指针的一些特性来编写自己的初始化函数memset
memset函数的作用是将某一块内存中的内容全部设置为指定的值，通常为新申请的内存做初始化工作。

*/
#include<stdio.h>
//具体作用是接收一个指针（可以是任意类型的数据）一个默认值还有一个尺寸值
//尺寸值应该是个数，比如数组的元素个数，如果就一个变量就填1
void* my_memset(void* p,char v ,int size)
{
    void* ret = p;               //ret为初始化对象（可以是任意类型的）

    char* dest = (char *)p;      //转化为char类型指针
    
    int i = 0;
    
    for (i = 0; i < size;i++)
    {
        dest[i] = v;             //赋值为默认值
    }
    
    return ret;                  //返回
}

int main()
{
    int i = 0;
    int a[5] = {1, 2, 3, 4, 5};
    
    for (i = 0; i < 5 ; i++)
    {
        printf("%d\n",a[i]);
    }

    int size = sizeof(a) / sizeof(a[0]);

    my_memset(a,0,size);    //数组名就是数组第一个元素的地址指针
    
    for (i = 0; i < 5 ; i++)
    {
        printf("%d\n",a[i]);
    }
    
    int l = 123123123;
    
    my_memset(&l,0,1);
    
    printf("%d\n",l);
    
    return 0;
}