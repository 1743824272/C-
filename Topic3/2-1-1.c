//��־��
#include<stdio.h>
#include<time.h>

//�˴������ԭ���ǡ�//�������ǵ���ע�ͼ��Ͻ���������Ȼ�������е����롰//���Ķ�����һ���ĳ�ͻ
//ѧϰӢ��С��ʿ��          \
Enter ���룬���룬��        \
Exit ���ڣ�ȥ

#define LOG(s) do{                                               \
    time_t t;                                                    \
    struct tm *ti;                                               \
    time(&t);                                                    \
    ti = localtime(&t);                                          \
    printf("%s[%s:%d] %s\n",asctime(ti),__FILE__,__LINE__,s);    \
}while(0)

void f()
{
    LOG("Enter f()...");
    LOG("Exit f()...");
}

int main()
{
    LOG("Enter main()...");

    f();

    LOG("Exit main()...");

    return 0;
}