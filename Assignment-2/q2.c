#include<stdio.h>
void main() {
    int sides[3];
    printf("Enter sides of triangle in increasing order : \n");
    for (int i = 0; i < 3; i++)
        scanf("%d", &sides[i]);
    if (sides[0] == sides[2]) {
        printf("Equilateral triangle\n");
    }
    else if (sides[0] == sides[1]) {
        printf("Isoceles triangle\n");
    }
    else if (sides[1] == sides[2]) {
        printf("Isoceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }
}
