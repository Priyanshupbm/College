/*
Exp no: 9
Task: 1
Name: Mishra Priyanshu
UIN: 241P005
Roll no: 05 Division: C
Title: WAP to find the topper.
*/

#include <stdio.h>

struct student_detail {
    char name[50];
    int roll;
    float total;
};

int topper(struct student_detail students[], int n) {
    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].total > students[topper_index].total) {
            topper_index = i;
        }
    }
    return topper_index;
}

int main() {
    struct student_detail students[5];
    int n = 5;

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Total Marks: ");
        scanf("%f", &students[i].total);
        printf("\n");
    }

    int topper_index = topper(students, n);

    printf("The Topper is:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll);
    printf("Total Marks: %.2f\n", students[topper_index].total);

    return 0;
}

/* Output: 

Enter details for student 1
Name: Alice
Roll Number: 101
Total Marks: 85

Enter details for student 2
Name: Bob
Roll Number: 102
Total Marks: 92

Enter details for student 3
Name: Charlie
Roll Number: 103
Total Marks: 88

Enter details for student 4
Name: Diana
Roll Number: 104
Total Marks: 94

Enter details for student 5
Name: Eve
Roll Number: 105
Total Marks: 90

The Topper is:
Name: Diana
Roll Number: 104
Total Marks: 94.00

*/
