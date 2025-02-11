/*
Name : Mishra Priyanshu
UIN : 241P005
Topic : Insertion and deletion in array at specific position
*/




#include <stdio.h>

#define MAX 10

void insert(int arr[], int *size, int pos, int element) {
    if (*size >= MAX) {
        printf("Array is full! Cannot insert element.\n");
        return;
    }

    if (pos < 1 || pos > *size + 1) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = *size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    (*size)++;
    printf("Element %d inserted at position %d.\n", element, pos);
}

void delete(int arr[], int *size, int pos) {
    if (*size == 0) {
        printf("Array is empty! Cannot delete element.\n");
        return;
    }

    if (pos < 1 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = pos - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
    printf("Element at position %d deleted.\n", pos);
}

void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], size = 0, element, pos, choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert element at specific position\n");
        printf("2. Delete element at specific position\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position to insert the element (1 to %d): ", size + 1);
                scanf("%d", &pos);
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insert(arr, &size, pos, element);
                break;
            case 2:
                printf("Enter the position to delete the element (1 to %d): ", size);
                scanf("%d", &pos);
                delete(arr, &size, pos);
                break;
            case 3:
                display(arr, size);
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
1. Insert element at specific position
2. Delete element at specific position
3. Display array
4. Exit
Enter your choice: 1
Enter the position to insert the element (1 to 1): 1
Enter the element to insert: 12
Element 12 inserted at position 1.

Menu:
1. Insert element at specific position
2. Delete element at specific position
3. Display array
4. Exit
Enter your choice: 1
Enter the position to insert the element (1 to 2): 1
Enter the element to insert: 56
Element 56 inserted at position 1.

Menu:
1. Insert element at specific position
2. Delete element at specific position
3. Display array
4. Exit
Enter your choice: 3
Array elements: 56 12

Menu:
1. Insert element at specific position
2. Delete element at specific position
3. Display array
4. Exit
Enter your choice: 2
Enter the position to delete the element (1 to 2): 1
Element at position 1 deleted.

Menu:
1. Insert element at specific position
2. Delete element at specific position
3. Display array
4. Exit
Enter your choice: 3
Array elements: 12

Menu:
1. Insert element at specific position
2. Delete element at specific position
3. Display array
4. Exit
Enter your choice: 4
Exiting...

*/

