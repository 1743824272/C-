/*
1.单引号表示字符常量，双引号表示字符串常量 

*/

#include <stdio.h>

int main()
{

    char* p1 =  1 ;
    char* p2 = '1';
    char* p3 = "1";

    printf("%s, %s, %s", p1, p2, p3);
    printf('\n');
    printf("\n");
    
    return 0;
}
