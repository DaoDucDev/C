#include<stdio.h>


int main(int argc, char const *argv[])
{
    char str[50];
    char name[] = "Dao Duc";

    //Nhập xuất string
    //Dùng printf() và scanf()
    //Dùng gets() và puts()

    printf("Nhap ten cua ban: ");
    // scanf("%[^\n]s", str);
    gets(str);
    printf("Xin chao %s", str);


    return 0;
}
