// Write a C program to check whether a number is prefect or not.

#include <stdio.h>
int main() {
    int num, sum = 0, i = 1;
    printf("Enter a number");
    scanf("%d",&num);
    while (i < num) {
        if (num%i== 0)
        sum = sum+i;
        i++;
    }
    if (sum == num){
        printf("The Number is Perfect");
    } else {
        printf("The Number is not perfect");
    }

    return 0;
}
