//author Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    sum = sum + (n%10);
    n = n / 10;
    sum = sum + (n%10);
    n = n / 10;
    sum = sum + (n%10);
    n = n / 10;
    sum = sum + (n%10);
    n = n / 10;
    printf("%d\n", sum);
}