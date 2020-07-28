
/*
1.编译器对注释的处理不是删除而是用空格代替   
2.在字符串中将注释符号仅仅看成简单的字符
3."\"可以作为//的换行符，可以注释下一行
4.多行注释不能嵌套（这没打出来多行注释符号就是因为这个原因）

*/

#include <stdio.h>

int main()
{
    int/*...*/i;
    char* s = "abcdefgh      //hijklmn";
    
    //Is it a \
    valid comment?
    
    in/*...*/t i;
    
    return 0;
}
