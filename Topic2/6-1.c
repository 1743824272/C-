#include <stdio.h>

int main()
{   
    /*
    int i = 0;
    //实际效果++i++因为读到这为止后面的不可能再与他结合是合法的了
    //之后编译器无法理解++i++，最后报错。
    int j = ++i+++i+++i;
    
    int a = 1;
    int b = 2;
    //此处因为是贪心法所以实际效果是int c = a++ + b;
    int c = a+++b;
    
    int* p = &a;
    
    b = b/*p;
    */  
    return 0;
}
