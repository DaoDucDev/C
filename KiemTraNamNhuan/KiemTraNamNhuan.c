#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int nam;
    printf("Nhap so nam bat ki: ");
    scanf("%d", &nam);

    if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        printf("%d la nam nhuan.", nam);
    }
    else
    {
        printf("%d khong phai la nam nhuan.", nam);
    }
    
    return 0;
}
