/*
Exp no: 10
Task: 1
Name: Mishra Priyanshu 
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to find sum of two numbers by using pointer.
*/

#include <stdio.h>

int main() {
    int n1, n2, sum;
    int *p1 = &n1, *p2 = &n2, *p3 = &sum;

    printf("Enter first number: ");
    scanf("%d", p1);
    printf("Enter second number: ");
    scanf("%d", p2);

    *p3 = *p1 + *p2;

    printf("The sum is: %d\n", sum);

    return 0;
}

/* Output: 

Enter first number: 5
Enter second number: 4
The sum is: 9

*/
