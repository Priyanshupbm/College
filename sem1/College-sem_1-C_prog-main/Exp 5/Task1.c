
/*

Exp no: 5
Task: 1
Name: Mishra Priyanshu 
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to find the factorial of a number using iterative and recursive function

*/

#include<stdio.h>

// Using Iterative Function
int calcFactIter(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}


// Using Recursive Function
int calcFactRecur(int n){

    int fact = 1;

    if(n == 1){
        return fact;
    }

    fact = n * calcFactRecur(n-1);

    return fact;
}



int main(){


    int fact1 = calcFactIter(5);
    int fact2 = calcFactRecur(6);

    printf("Factorial using Iterative Function is %d", fact1);
    printf("\nFactorial using Recursive Function is %d", fact2);



return 0;

}

/*
OUTPUT:

Factorial using Iterative Function is 120
Factorial using Recursive Function is 720

*/
