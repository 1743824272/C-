#include <stdio.h>

int main()
{  
    int a;
    
    //三种sizeof的用法
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof a);
    printf("%d\n", sizeof(int));
    
    return 0;
}