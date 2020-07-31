//日志宏
#include<stdio.h>
#include<time.h>

//此处报错的原因是“//”定义是单行注释加上接续符后虽然可以运行但是与“//”的定义有一定的冲突
//学习英语小贴士；          \
Enter 进入，输入，进        \
Exit 出口，去

#define LOG(s) do{                                               \
    time_t t;                                                    \
    struct tm *ti;                                               \
    time(&t);                                                    \
    ti = localtime(&t);                                          \
    printf("%s[%s:%d] %s\n",asctime(ti),__FILE__,__LINE__,s);    \
}while(0)

void f()
{
    LOG("Enter f()...");
    LOG("Exit f()...");
}

int main()
{
    LOG("Enter main()...");

    f();

    LOG("Exit main()...");

    return 0;
}