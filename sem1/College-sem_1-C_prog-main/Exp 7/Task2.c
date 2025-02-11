/*
Exp no: 7
Task: 2
Name: Mishra Priyanshu 
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to find sum of two matrix.
*/

#include<stdio.h>

int main(){

    int s;
    printf("Enter size of Square Matrix : ");
    scanf("%d",&s);

    int a1[s][s], a2[s][s], sum[s][s];

    printf("\nEnter Matrix A: \n");
    for(int i = 0; i < s; i++){

        for(int j = 0; j < s; j++){

            printf("Enter element a%d%d :", i + 1, j + 1);
            scanf("%d", &a1[i][j]);

        }
    }

    printf("\nEnter Matrix B: \n");
    for(int i = 0; i < s; i++){

        for(int j = 0; j < s; j++){

            printf("Enter element a%d%d :", i + 1, j + 1);
            scanf("%d", &a2[i][j]);

        }
    }

    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            
            sum[i][j] = a1[i][j] + a2[i][j];
            
        }
    }
    
    printf("\nSum Matrix of A and B is\n");
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            printf("a%d%d : %d\n", i + 1, j + 1, sum[i][j]);        
            
        }
    }

    return 0;
}

/* Output:
Enter size of Square Matrix: 2

Enter Matrix A: 
Enter element a11 :1
Enter element a12 :2
Enter element a21 :3
Enter element a22 :4

Enter Matrix B: 
Enter element a11 :5
Enter element a12 :4
Enter element a21 :3
Enter element a22 :2

Sum Matrix of A and B is
a11 : 6
a12 : 6
a21 : 6
a22 : 6
*/
