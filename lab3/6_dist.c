#include<stdio.h>
void main() {
    int d;
    printf("Enter distance in mm\n");
    scanf("%d", &d);
    float cm = d / 10.0;
    float inch = cm / 2.5;
    float feet = inch / 12;
    printf("%d mm is equal to %f cm(s), %f inch(es), %f feet(s)", d, cm, inch, feet);
}