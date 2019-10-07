#include<stdio.h>
void main() {
    int year;
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 100 == 400) {
                printf("Leap");
                return;
            }
            printf("Not Leap");
            return;
        }
        printf("Leap");
        return;
    }
}