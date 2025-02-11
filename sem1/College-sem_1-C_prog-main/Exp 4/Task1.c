/*

Exp no: 4
Task: 1
Name: Mishra priyanshu
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to find all the prime numbers between two numbers.

*/


#include<stdio.h>


int checkPrime(int num){

    int prime=1;

    if(num==1){
        return 0;
    }

    for(int i=2; i< num; i++){
        if(num % i == 0){
            prime = 0;
            break;
        }
    }

    return prime;
}


int main(){

    int start, stop;

    printf("\nEnter start number: ");
    scanf("%d",&start);

    printf("\nEnter stop number: ");
    scanf("%d",&stop);

    for(int i = start; i <= stop; i++){

        int ifPrime;
        ifPrime = checkPrime(i);

        if(ifPrime == 1){
            printf("\n%d", i);
        }

    }

return 0;

}


/*
OUTPUT:

Enter start number: 1
Enter stop number: 20

2
3
5
7
11
13
17
19

*/


