/*
Name : Mishra Priyanshu
UIN : 241P005
Topic : Array implementation in stack
*/


#include <stdio.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push() {
    int element;
    if (top >= MAX - 1) {
        printf("Stack is full! Cannot push element.\n");
        return;
    }

    printf("Enter the element to push onto the stack: ");
    scanf("%d", &element);
    stack[++top] = element;
    printf("Element %d pushed onto the stack.\n", element);
}

void pop() {
    if (top == -1) {
        printf("Stack is empty! Cannot pop element.\n");
        return;
    }

    printf("Element %d popped from the stack.\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push element onto stack\n");
        printf("2. Pop element from stack\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


/*
Output :
Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 1
Enter the element to push onto the stack: 10
Element 10 pushed onto the stack.

Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 1
Enter the element to push onto the stack: 20
Element 20 pushed onto the stack.

Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 3
Stack elements: 10 20

Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 2
Element 20 popped from the stack.

Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 3
Stack elements: 10

Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 2
Element 10 popped from the stack.

Menu:
1. Push element onto stack
2. Pop element from stack
3. Display stack
4. Exit
Enter your choice: 3
Stack is empty!


*/
