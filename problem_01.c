// Write a C program to find out the area of triangle

#include <stdio.h>
int main() {
int b, h, area;
printf("Enter the value of Base: ");
scanf("%d",&b);

printf("Enter the value of Height: ");
scanf("%d",&h);

area = 0.5 * b * h;

printf("The Area of the triangle is %d ", area);

return 0;
}
