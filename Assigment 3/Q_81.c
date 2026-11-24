#include <stdio.h>

struct Student {
    int rollNo;
    char name[100];
    float marks;
};

void displayTopStudents(struct Student s[], int n) {
    int found = 0;
    printf("\n--- Students with Marks Greater Than 500 ---\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks > 500) {
            printf("Roll No: %d | Name: %s | Marks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
            found = 1;
        }
    }
    if (!found) {
        printf("No student scored more than 500 marks.\n");
    }
}

int main() {
    struct Student students[10];

    for (int i = 0; i < 10; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    displayTopStudents(students, 10);
    return 0;
}