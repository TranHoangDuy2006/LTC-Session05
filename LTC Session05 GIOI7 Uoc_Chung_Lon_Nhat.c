#include <stdio.h>

int main() 
{
    int num1, num2, temp;
    printf("\n");
    printf("Nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Nhao vao so nguyen duong thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) 
    {
        printf("\n");
        printf("Ca hai so deu phai la so nguyen duong!");
        return 1;
    }

    while(num2 != 0)
        {
            temp = num1 % num2;
            num1 = num2; 
            num2 = temp;
        }

    printf("\nUoc chung lon nhat hai so la: %d", num1);
    
    return 0;

}