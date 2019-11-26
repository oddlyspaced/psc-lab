#include<stdio.h>
int sum(int, int);
void main() {
    printf("Enter start and end: \n");
    int start, end;
    scanf("%d %d", &start, &end);
    int choice;
    printf("Enter 1 for sum of even number, 0 for odd: \n");
    scanf("%d", &choice);
    if (choice == 1) {
        if (start%2 == 1) {
            start = start + 1;
        }
        if (end%2 == 1) {
            end = end - 1;
        }
    }
    else {
        if (start%2 == 0) {
            start = start + 1;
        }
        if (end%2 == 0) {
            end = end - 1;
        }
    }
    printf("start : %d, end = %d\n", start, end);
    printf("Sum: %d", sum(start, end));
}

int sum(int num, int end) {
    if (num < end) {
        return num + sum(num + 2, end);
    }
    else if (num == end) {
        return num;
    }
}