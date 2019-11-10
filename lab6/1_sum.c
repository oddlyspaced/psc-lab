#include<stdio.h>
void main() {
    printf("Enter amount of numbers: \n");
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    printf("Sum: %d", sum);
}