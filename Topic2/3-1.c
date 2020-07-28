/*
将字符串赋值给一个字符时
字符串会自己生成一个地址这个地址时长于字符地址8位的所以只取后八位作为地址进行后续操作
*/

#include <stdio.h>

int main()
{

    char c = " ";
    
    while( c=="\t" || c==" " || c=="\n" )
    {
        scanf("%c", &c);
    }
    
    return 0;
}
