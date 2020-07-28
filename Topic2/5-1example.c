#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
/*

题目：有一个数列，其中的自然数都是以偶数的形式出现，只有一个自然数出现的次数是奇数个，编写程序找出这个自然数。

*/


//实现A同学算法

//因为需要排序所以太耗费时间
/*
int main()
{
    int arr[11] = {1, 4, 6, 8, 6, 1, 1, 2, 8, 2, 4};
    int i=0, j=0;
    int size = (sizeof(arr) / sizeof(arr[0]))-1;
    int flag = 1;
    //用排序将相同的数聚在一起
    for (i = 0; i < size ; i++)
    {
        flag = 1; //设置标志位，优化冒泡
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //用位运算符能大大加快运算速度，节省空间
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
                
                flag = 0;
            };
        }
    }
    //计数
    for (i = 0; i < size; i++)
    {
        flag = 1;
        if(arr[i]==arr[i+1])
        {
            flag++;
        }else
        {
            //如果是奇数
            if((flag%2)!=0)
            {
                printf("出现奇数次的自然数是：%d\n",arr[i]);
            }else
            {
                flag = 1;
            }
        }
    }
}

*/


//实现B同学算法

//虽然比A同学的排序高效利用了for循环，但是也比A同学占用更多的内存
/*
//p为初始化对象，v为默认值，size为大小
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
    int a[11] = {1,  -4, 6, 8, 6, 1, 1, 2, 8, 2, -4};
    int i = 0;
    int size = sizeof(a) / sizeof(a[i])-1;
    int max = a[0];
    int *b = NULL;
    //遍历数列找到最大值max
    for (i = 1; i < size; i++)
    {
        if(max>=a[i])
        {
            max = a[i];
        }
    }
    //动态申请max个int数组b
    b = (int*)malloc(sizeof(int) * (max+1));
    //将数组中值都设为0
    my_memset(b,0,size);
    //遍历原数组，出现一次就加一
    for (i = 0; i < size; i++)
    {
        b[a[i]]++;
    }
    for (i = 0; i < max+1; i++)
    {
        if(b[i]%2!=0)
        {
            printf("出现奇数次的自然数是：%d\n",a[i]);
        }
    }
}
*/


//用按位异或来实现算法（最优解）

//用这种方法不仅不用排序而且也非常的节省空间。
//因为位运算符比数学运算符运算效率最高，因此也十分节省时间。
/**/
int main()
{
    int a[11] = {1,-4, 6, 8, 6, 1, 1, 2, 8, 2, -4};
    int i = 0;
    //计算数组的长度
    int size = sizeof(a) / sizeof(a[0]);
    int temp = 0;
    //将每个数都进行异或处理，相同的数会相互抵消，剩下的一个数就是奇数次出现的数
    for (i = 0; i < size; i++)
    {
        temp = temp ^ a[i];
    }
    printf("出现奇数次的自然数是：%d\n",temp);
}