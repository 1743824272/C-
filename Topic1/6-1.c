#include <stdio.h>
#include <malloc.h>

/*

    1.空结构体的大小不同的编译器结果是不同的。（理论上应该是0但是为了防止不同变量的地址是相同的大部分设为1）
    2.柔性数组即数组大小待定的数组。

*/

//由结构体实现柔性数组
typedef struct _soft_array
{
    int len;       //数组长度
    int array[];
}SoftArray;



int main()
{  
    int i = 0;
    SoftArray* sa = (SoftArray*)malloc(sizeof(SoftArray) + sizeof(int) * 10);
    
    sa->len = 10;
    
    for(i=0; i<sa->len; i++)
    {
        sa->array[i] = i + 1;
    }
    
    for(i=0; i<sa->len; i++)
    {
        printf("%d\n", sa->array[i]);   
    }
    
    free(sa);

    union dad
    {
        int a;
        char b;

    }son;

    son.a = 2;

    printf("%d\n",son.b);
    return 0;
}