//เขียนโปรแกรมคำ นวณพื้นที่ของวงกลม โดยรับรัศมีของวงกลมจากผู้ใช้
#include <stdio.h>

void main() 
{
    const float Pi = 3.14159265;
    float radius, area = 0;
   
    
    printf("Enter radius :");
    scanf("%f",&radius);
    printf("r = %.2f", radius);
    area = Pi * (radius * radius);
    printf("\nOutPut :\n\tCircle Area = %.2f",area);

}