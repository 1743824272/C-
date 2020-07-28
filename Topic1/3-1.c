/*
选择语句：
    if:
        1.当普通变量和0值进行比较时0值应该出现在比较符号左边。（这种编写习惯不容易出错，出错了也比较好找，因为变量名长短不一）
        2.booler类型的变量应该直接出现在条件中，不要进行比较。
        3.float类型变量不能直接进行0值比较，需要定义精度。

    switch:
        4.case 语句中的值只能是整形或字符型。
        5.case 的排序分析：正常情况放前面，异常情况放后面。按字母或数字排列。default语句只用于处理真正的默认情况。

    if 和 switch 适用的不同情况：
        if适用“按片”进行判断。（是用是否满足条件来选择进行代码块）
        switch适用于对离散值进行分别判断。
        if是连续的全能的，switch是离散的。
        多分支判断用switch更加的简洁。

*/
#include <stdio.h>
#include <stdlib.h>

int func (int n )
{
    int i = 0;

    int ret = 0;
    
    int *p = (int *)malloc(sizeof(int) * n);
    
    //这个do while 仅运行一次起到一个块地作用将判断执行放在一起。
    do
    {
        if(NULL == p)
            break;
        if(n<0)
            break;
        for (i = 0; i < n;i++)
        {
            p[i] = i;
            printf("%d\n",p[i]);
        }
    } while (0);
    
    //然后再统一地释放资源
    free(p);

    return ret;
    
}

void f1(int i)
{
    if( i < 6 )
    {
        printf("Failed!\n");
    }
    else if( (6 <= i) && (i <= 8) )
    {
        printf("Good!\n");
    }
    else
    {
        printf("Perfect!\n");
    }
}

void f2(char i)
{
    switch(i)
    {
        case 'c':
            printf("Compile\n");
            break;
        
        case 'd':
            printf("Debug\n");
            break;
        
        case 'o':
            printf("Object\n");
            break;
            
        case 'r':
            printf("Run\n");
            break;
        
        default:
            printf("Unknown\n");
            break;
            
    }
}

int main()
{
    f1(5);
    f1(9);
    
    f2('o');
    f2('d');
    f2('e');
}