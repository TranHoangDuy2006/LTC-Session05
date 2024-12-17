#include <stdio.h>

int main ()
{
    double a, b, result;
    int lua_chon;
    
    do {
        printf("\n");
        printf("\n-------| Calcalutor FX570VN |-------\n");
        printf("\n");
        printf("1. Phep tinh tong \n");
        printf("\n2. Phep tinh hieu \n");
        printf("\n3. Phep tinh nhan \n");
        printf("\n4. Phep tinh chia \n");
        printf("\n5. Thoat \n");
        printf("\n");
        printf("? Lua chon cua ban la: ");
        scanf("%d", &lua_chon);

    if(lua_chon >= 1 && lua_chon <= 4) 
    {
        printf("\nNhap so a: ");
        scanf("%lf", &a);
        printf("\nNhap so b: ");
        scanf("%lf", &b);
    }

        switch (lua_chon) 
        {
            case 1:
                result = a + b;
                
                printf("\nTong cua %.1lf va %.1lf la: %.1lf", a, b, result);
                
                break;
            
            case 2:
                result = a - b;
                
                printf("\nHieu cua %.1lf va %.1lf la: %.1lf", a, b, result);
               
                break;

            case 3:
                result = a * b;
                
                printf("\nTich cua %.1lf va %.1lf la: %.1lf", a, b, result);
                
                break;
            
            case 4:
                if (b != 0)
                {
                    result = a / b;
                    printf("\nThuong cua %.1lf va %.1lf la: %.1lf", a, b, result);
                }
                    else 
                    {
                        printf("\nKhong the chia cho so 0!");
                    }   
                        
                        break;
            
            case 5:
                printf("\nThoat chuong trinh!");
                break;
            
            default:
                printf("\nSai gia tri nhap vao, vui long nhap lai!");                
        }

        }   

    while(lua_chon != 5);

    return 0;
}
