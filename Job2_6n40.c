//เขียนโปรแกรมรับข้อมูลจำ นวนเต็ม 5 จำ นวนจากผู้ใช้ และหาว่าค่าเฉลี่ยของข้อมูลที่รับเข้ามามีค่าเท่าใด
#include <stdio.h>
main()
{
    int num1, num2, num3, num4, num5, av=0;
    printf("Enter User 1 :");
    scanf("%d",&num1);
    printf("Enter User 2 :");
    scanf("%d",&num2);
    printf("Enter User 3 :");
    scanf("%d",&num3);
    printf("Enter User 4 :");
    scanf("%d",&num4);
    printf("Enter User 5 :");
    scanf("%d",&num5);

    av = (num1+num2+num3+num4+num5)/5;
    printf("av : %d",av);

}