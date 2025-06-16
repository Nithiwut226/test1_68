#include <stdio.h>
void main()
{
    char name[10];
    int height;
    printf("Enter name :");
    scanf("%s",&name);
    printf("Enter height(cm.) :");
    scanf("%d",&height);
    printf("OutPut : \n\tName\tHeight(cm.)\n\t%s\t%d cm",name,height);
}