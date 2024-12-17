#include <stdio.h>

int main() {
    int givenNum, typeNum;

    printf("\nNhap so cho truoc: ");
    scanf("%d", &givenNum);

    do 
    {
        printf("\nNhap mot so: ");
        scanf("%d", &typeNum);
    } 
        while(typeNum != givenNum && printf("\nX Chua dung, nhap lai di!\n")); 

            printf("\n✓ Ban da nhap dung so roi!\n");
            printf("\n");

    return 0;
}