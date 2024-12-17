#include <stdio.h>

int main() 
{
    int i, X;
    int sum = 0;
    printf("\n");
    printf("Nhap vao so nguyen duong X: ");
    scanf("%d", &X);

    if (X <= 0)
    {
        printf("Sai gia tri, vui long nhap lai!");
    }
        while (X <= 0);
            for (int i = 1; i <= X; i++)
    {
                sum += i;
    }
        printf("\n");
        printf("Tong tu 1 den %d la: %d", X, sum);

    return 0;

}