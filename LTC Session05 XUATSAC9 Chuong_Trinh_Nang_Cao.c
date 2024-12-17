#include <stdio.h>

int main ()
{
    int choices, x, y, z;
    int sum = 0;
    float average;
    int selected = 0;
    
    menu:
    printf("\n===== PROGRAM MENU =====");
    printf("\n\n1. Nhap 3 so x, y, z");
    printf("\n\n2. Tong 3 so");
    printf("\n\n3. Trung binh cong 3 so");
    printf("\n\n4. So nho nhat");
    printf("\n\n5. So lon nhat");
    printf("\n\n6. Thoat");
    printf("\n\nNhap lua chon cua ban: ");
    scanf("%d", &choices);

    switch(choices)
    {
    case 1:
        printf("\nNhap so x, y, z: ");
        scanf("%d %d %d", &x, &y, &z);
        
        goto menu;
    
    case 2:
            sum = (x + y + z);
            printf("\nTong cua 3 so %d, %d, %d la: %d", x, y, z, sum);
            
            break;

    case 3:
            average = ((x + y + z) / 3.0);
            printf("\nTrung binh cong cua 3 so %d, %d, %d la: %.0f", x, y, z, average);
            
            goto menu;

    case 4:
            int minValue = x; 
            
            if(y < minValue)
            {
                minValue = y;
                printf("\n%d la so nho nhat trong 3 so!", minValue);
            }
                else if (z < minValue)
                {
                    minValue = z;
                    printf("\n%d la so nho nhat trong 3 so!", minValue);
                }
                    else
                        {
                            printf("\n%d la so nho nhat trong 3 so!", minValue);
                        }
            
            break;
    
    case 5:
            int maxValue = x; 
            
            if(y > maxValue && y > z)
            {
                maxValue = y;
                printf("\n%d la so lon nhat trong 3 so!", maxValue);
                printf("\n\n");
                
                goto menu;
            }
                else if (z > maxValue && z > y)
                {
                    maxValue = z;
                    printf("\n%d la so lon nhat trong 3 so!", maxValue);
                    printf("\n\n");
                    
                    goto menu;
                }
                    else
                        {
                            printf("\n%d la so lon nhat trong 3 so!", maxValue);
                            printf("\n\n");
                            
                            goto menu;
                        }
                
                break;

    case 6:
            printf("\nThoat chuong trinh!");
            printf("\n\n");
            
            break;
    }
    
    return 0;

}


    

    


                





