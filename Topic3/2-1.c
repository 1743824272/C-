#include <stdio.h>
#include <malloc.h>

//接收一个类型和大小来在堆上开辟一块内存来存放该类型该大小的数组
#define MALLOC(type, x) (type*)malloc(sizeof(type)*x)
//死循环
#define FOREVER() while(1)
//将{用BEGIN来代替
#define BEGIN {
//将}用END代替
#define END   }
//接收一个循环参数和一个循环次数参数，来代替for循环一部分功能
#define FOREACH(i, m) for(i=0; i<m; i++)
 

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int x = 0;
    int*p = MALLOC(int, 5);
    
    FOREACH(x, 5)
    BEGIN
        p[x] = array[x];
    END
    
    FOREACH(x, 5)
    BEGIN
        printf("%d\n", p[x]);
    END
    
    FOREVER();
    
    free(p);
    
    printf("Last printf...\n");
    
    return 0;
}