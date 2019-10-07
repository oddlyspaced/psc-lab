#include<stdio.h>
void main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n", a, b);
}