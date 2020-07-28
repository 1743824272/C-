/*
1.接续符“\”的使用：编译器会将反斜杠剔除，跟在反斜杠后面的字符自动接到前一行
*/
#include <stdio.h>

#def\
ine MAX\
255

int main()
{
/\
/这是\
\
注释

i\
n\
t\
 *\
 p\
= \
 NULL;

printf("%0X\n", p);
    
return 0;
}
