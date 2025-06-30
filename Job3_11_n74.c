//เขยี นโปรแกรมเพอื่ คาํ นวณยอดภาษี VAT โดยคิดภาษี VAT ที่ 7 % ใหร้ บั ขอ้ มลู ยอดเงนิ ทลี่ กู คา้ ซอื้ สนิ คา้ และแสดงยอดภาษี และยอดเงินที่ลูกค้าต้องจ่ายทั้งหมด
#include <stdio.h>
void main()
{
    float num,vat=0,price=0;
    printf("Enter Product price : ");
    scanf("%f",&num);
    vat = num * 0.07;
    price = num + vat;
    printf("Output : \n\t VAT : %.2f \n\t prize : %.2f",vat,price);
}