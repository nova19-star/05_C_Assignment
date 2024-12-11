// Write a C program to find out the GCD (Greatest common Division) of a number.


#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("The Greatest Common Division (GCD) is: %d\n", a);
    return 0;
}
