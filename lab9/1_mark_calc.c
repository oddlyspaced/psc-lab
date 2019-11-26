#include<stdio.h>
void main() {
    int marks[3][5];
    int total[3];
    int tot_counter = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter marks for student %d: ", i+1);
        for (int j = 0; j < 5; j++) {
            scanf(" %d", &marks[i][j]);
            total[tot_counter] = total[tot_counter] + marks[i][j];
        }
        tot_counter++;
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d: \t", i+1);
        for (int j = 0; j < 5; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        printf("%d\t", total[i]);
    }
}