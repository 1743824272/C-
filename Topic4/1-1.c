 #include <stdio.h>

int main()
{
    int i;
    int* pI;
    char* pC;
    float* pF;
    
    pI = &i;

    //如何通过地址直接找到内存位置
    *((int *)0x61FE14) = 100;

    printf("%0X, %0X, %d\n", pI, &i, i);
    printf("%d, %d, %0X\n", sizeof(int*), sizeof(pI), &pI);
    printf("%d, %d, %0X\n", sizeof(char*), sizeof(pC), &pC);
    printf("%d, %d, %0X\n", sizeof(float*), sizeof(pF), &pF);
    
    return 0;
}
