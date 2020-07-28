
/*
    逻辑符“!”只认得0，只知道见到0就返回1，如果不是0就返回0.
*/

#include <stdio.h>

int main()
{
    printf("%d\n", !0);
    printf("%d\n", !1);
    printf("%d\n", !100);
    printf("%d\n", !-1000);
    
    return 0;
}
