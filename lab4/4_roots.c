#include<stdio.h>
#include<math.h>
void main() {
    int a, b, c;
    printf("Enter co efficients a, b, c : \n");
    scanf("%d %d %d", &a, &b, &c);
    double d = sqrt((b * b) - (4 * a * c));
    double r1 = ((-1 * b) + d)/(2 * a);
    double r2 = ((-1 * b) - d)/(2 * a);
    printf("Root 1 = %lf, Root 2 = %lf", r1, r2);
}