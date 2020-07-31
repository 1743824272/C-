#include <stdio.h>

#line 14 "Hello.c"                      //意思为；定义下行为第14行，文件名为Hello.c

#define CONST_NAME1 "CONST_NAME1"
#define CONST_NAME2 "CONST_NAME2"

void f()
{
    return 0;
}

int main()
{
    printf("%s\n", CONST_NAME1);        
    printf("%s\n", CONST_NAME2);
    printf("%d\n", __LINE__);           //因为上面把第4行定义为第14行，因此此行打印出的行号是27     
    printf("%s\n", __FILE__);           //因为上面把文件名定义为Hello.c，因此打印出的文件名不是4-2.c而是Hello.c  
    
    f();

    return 0;
}