#include<stdio.h>
#include<math.h>

int isperfect(int);
int isarmstrong(int);
void main() {
    printf("Enter number: \n");
    int num;
    scanf("%d", &num);
    printf("Enter 1 to check for perfect number, 2 to check for armstrong number: \n");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
        if (isperfect(num) == 1) {
            printf("Number is perfect!\n");
        }
        else {
            printf("Number is not perfect!\n");
        }
    }
    else if (choice == 2) {
        if (isarmstrong(num) == 1) {
            printf("Number is armstrong!\n");
        }
        else {
            printf("Number is not armstrong!\n");
        }
    }
}

int isperfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num%i == 0) {
            sum = sum + i;
        }
    }
    if (sum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int isarmstrong(int num) {
    int sum = 0;
    int copy = num;
    while (num > 0) {
        int rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    }
    if (sum == copy) {
        return 1;
    }
    else {
        return 0;
    }
}