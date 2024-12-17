#include <stdio.h>

int main() 
{
    int X;

    do 
    {
        printf("Nhap vao so nguyen duong X: ");
        scanf("%d", &X);

        if (X < 1 || X > 10) 
        {
            printf("Sai du lieu nhap vao, vui long nhap lai!\n");
        }
    } 
        while (X < 1 || X > 10); //

        for (int i = 1; i <= 10; i++) {
        
        printf("%d x %d = %d\n", X, i, X * i);
    }

    return 0;
}
