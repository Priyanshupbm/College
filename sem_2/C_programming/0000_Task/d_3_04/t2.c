#include <stdio.h>

#define size 10


int stack[size],c,v,top=-1;

void push();
void pop();
void display();


int main(){


    while(1){

        printf("\n\n   Welcome to stack data structure ");
        printf("\n\n\nSelect the operation to perform in the stack \n1.Push\n2.Pop\n3.Display\n4.Exit\n    :  ");
        scanf("%d",&c);


        switch(c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n\nThank to use my program  !!");
            return 0;
        default :
            printf("\n\nPlease only enter number from 1 to 4 .\n");


        }
    }



    return 0;
}




void push(){

    if(top==size){
            printf("\n\nThe stack is full .........  ");
        return;
    }

    printf("\nEnter the number  :  ");
    scanf("%d",&v);

    stack[top+1] = v;
    top+=1;
}



void pop(){


    if(top==-1){
        printf("\nThe stack is empty ..please first enter some data........");
        return;
    }

    printf("\nThe top value of the stack is removed i.e. %d",stack[top]);
    top-=1;


}



void display(){

    if(top==-1){
        printf("\nThe stack is empty ..please first enter some data........");
        return;
    }
    printf("\n");
    for(int i = 0; i<=top ; i++){
        printf(" %d",stack[i]);
    }

    printf("\n");


}
