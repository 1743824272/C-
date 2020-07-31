 #include <stdio.h>

#pragma pack(8)

struct S1
{
    short a;
    long b;
};
/*

    数据            起始地址    大小        空
    short a         0           2
                                            2           
    long  b         4           4
                    8

*/
struct S2
{
    char c;
    struct S1 d;
    double e;
};
/*

    数据            起始地址    大小        空
    char c          0           1
                                            3
    struct S1 d     4           8
                                            4
    double e        16          8
                    24

*/

#pragma pack()

int main()
{
    struct S2 s2;
    
    printf("%d\n", (int)sizeof(struct S1));
    printf("%d\n", (int)sizeof(struct S2));
    printf("%d\n", (int)&(s2.d) - (int)&(s2.c));

    return 0;
}
