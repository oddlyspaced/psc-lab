#include<stdio.h>
void main() {
    printf("Enter two integers: \n");
    int a, b;
    scanf("%d %d", &a, &b);
    char c;
    printf("Enter operand: \n");
    scanf(" %c", &c);
    switch(c) {
        case '+' : printf("%d", (a+b));
                   break;
        case '-' : printf("%d", (a-b));
                   break;
        case '*' : printf("%d", (a*b));
                   break;
        case '/' : printf("%f", (a/b));
                   break;
        default  : printf("Invalid operand!");
                   break;
    }
}