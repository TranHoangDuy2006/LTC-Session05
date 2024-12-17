#include <stdio.h>

int main () 
{
    int num1, num2, temp, leastCommonMultiple;

    printf("\n");
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("\n");
        printf("Ca hai so deu phai la so nguyen duong!\n");
        return 1;
    }

    printf("\n");

    int x = num1;
    int y = num2;
    
    while(y != 0)
        {
            temp = x % y;
            x = y;
            y = temp;
        }

    leastCommonMultiple = (num1 * num2) / x;

    printf("Boi chung nho nhat cua hai so la: %d", leastCommonMultiple);

    printf("\n\n");

    return 0;
}
