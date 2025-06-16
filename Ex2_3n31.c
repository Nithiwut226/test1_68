#include <stdio.h>
void main() {
    int y, count;
    count = 1;
    y = count++;
    printf("y = %d, count = %d", y,count);
    count = 1;
    y = ++count;
    printf("\ny = %d, count = %d", y,count);
}