/*

Exp no: 1
Task: 2
Name: Mishra Priyanshu
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to get students PCM marks from user and find the average
and use conditional operator to print if the student is eligible for admission or not


*/




#include<stdio.h>
int main(){

    float phy,chem,math,avg;

    printf("\nEnter Physics Marks : ");
    scanf("%f",&phy);

    printf("\nEnter Chemistry Marks : ");
    scanf("%f",&chem);

    printf("\nEnter Mathematics Marks : ");
    scanf("%f",&math);


    avg=(phy+chem+math)/3;
    printf("\n\nYour average marks is %f",avg);


    (avg<=50)?printf("\nYou are not eligible\n"): printf("\nYou are eligible");

return 0;
}


/* output

Enter Physics Marks : 70

Enter Chemistry Marks : 90

Enter Mathematics Marks : 80


Your average marks is 80
You are eligible

*/

