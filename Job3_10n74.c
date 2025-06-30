//เขียนโปรแกรมเพื่อรับค่าข้อมูลจำ นวนเต็มจากผู้ใช้ ให้หาว่าถ้าเพิ่มค่าข้อมูลนั้นขึ้น 2 เท่าจะมีค่าเท่าใด
#include <stdio.h>
void main()
{
    int num,num2=0;
    printf("Enter Number : ");
    scanf("%d",&num);
   
    num2 = num*2;
    if(num2 == num*2);
    printf("num2 = %d",num2);
    
}