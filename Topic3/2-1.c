#include <stdio.h>
#include <malloc.h>

//����һ�����ͺʹ�С���ڶ��Ͽ���һ���ڴ�����Ÿ����͸ô�С������
#define MALLOC(type, x) (type*)malloc(sizeof(type)*x)
//��ѭ��
#define FOREVER() while(1)
//��{��BEGIN������
#define BEGIN {
//��}��END����
#define END   }
//����һ��ѭ��������һ��ѭ������������������forѭ��һ���ֹ���
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