//C program to read two numbers from user and add them using pointers. 
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    sum = *ptr1 + *ptr2;
    printf("Sum = %d", sum);
}
