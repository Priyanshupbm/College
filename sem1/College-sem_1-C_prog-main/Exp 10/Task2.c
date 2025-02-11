/*
Exp no: 10
Task: 2
Name: Mishra Priyanshu 
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to print reverse of element of array by using pointer.
*/

#include <stdio.h>

int main() {
    int arr[5], *ptr;
    
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr + 4; 

    printf("Array in reverse order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--; 
    }

    printf("\n");

    return 0;
}


/* Output: 

Enter 5 elements:
6 7 8 9 5
Array in reverse order:
5 9 8 7 6

*/
