// author - Hardik Srivastava (oddlyspaced)
// Swapping of two variables by using pointers
#include<stdio.h>
void swap (int*, int*);
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int a, b;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);
}