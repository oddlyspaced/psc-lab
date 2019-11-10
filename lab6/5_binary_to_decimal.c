#include<stdio.h>
#include<math.h>
void main() {
    int n;
    printf("Enter binary number: \n");
    scanf("%d", &n);
    int bin = 0;
    int power = 0;
    while (n > 0){
        int rem = n % 10;
        bin = bin + (rem*(pow(2, power)));
        n = n / 10;
        power++;
    }
    printf("Decimal: %d", bin);
}