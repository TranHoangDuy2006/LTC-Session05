#include <stdio.h>

void calculator()
{
    double a, b, ket_qua;
    int lua_chon;
    
    do {
        printf("\n");
        printf("\n-------| Calcalutor FX570VN |-------\n");
        printf("\n");
        printf("1. Phep tinh tong \n");
        printf("\n2. Phep tinh hieu \n");
        printf("\n3. Phep tinh nhan \n");
        printf("\n4. Phep tinh chia \n");
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
                ket_qua = a + b;
                printf("\nTong cua %.1lf va %.1lf la: %.1lf", a, b, ket_qua);
                break;
            
            case 2:
                ket_qua = a-b;
                printf("\nHieu cua %.1lf va %.1lf la: %.1lf", a, b, ket_qua);
                break;

            case 3:
                ket_qua = a*b;
                printf("\nTich cua %.1lf va %.1lf la: %.1lf", a, b, ket_qua);
                break;
            
            case 4:
                if (b != 0)
                {
                    ket_qua = a/b;
                    printf("\nThuong cua %.2lf va %.2lf la: %.2lf", a, b, ket_qua);
                }
                    else 
                    {
                        printf("\nKhong the chia cho so 0!");
                    }   
                        break;
            default:
                printf("\nSai gia tri nhap vao, vui long nhap lai!");
                
        }

        }   

    while(lua_chon != 4);

}
int main()
{
    calculator();
        
    return 0;
}