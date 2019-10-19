//author Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    int o;
    printf("Enter 0 for C to F, or 1 for F to C\n");
    scanf("%d", &o);
    int t;
    if (o == 0) {
        printf("Enter temperature in C :\n");
        scanf("%d", &t); // C
        float F = ((9.0 * t) / 5.0) + 32.0;
        printf("%f", F);
    }
    else {
        printf("Enter temperature in F :\n");       
        scanf("%d", &t); // F
        float C = (5.0 / 9.0) * (t - 32);
        printf("%f", C);
    }
}