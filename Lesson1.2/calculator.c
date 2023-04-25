#include<stdio.h>
int main()
{
    int a;
    int b, tong, tich;

    printf("a =  ");
    scanf("%d",  &a);
    printf("b =  ");
    scanf("%d",  &b);

    tong = a+b;
    tich = a*b;
    
    printf("Tong la: ");
    printf("%d", tong);
    printf("\nTich la: %d", tich);
 // printf("Tong la:  %d\nTich la: %d", tong , tich);
    return 0 ;
}