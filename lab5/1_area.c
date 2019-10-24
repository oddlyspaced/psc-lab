// author - Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    printf("Enter\n 1 for calculating area of circle\n 2 calculating for area of rectangle\n 3 for calculating area of triangle\n");
    int radius, length, breadth, base, height;
    int choice;
    double area;
    scanf(" %d", &choice);
    switch(choice) {
        case 1 : printf("Enter radius : \n");
                 scanf("%d", &radius);
                 area = 3.14 * radius * radius;
                 printf("Area of circle : %lf", area);
                 break;
        case 2 : printf("Enter length and breadth : \n");
                 scanf("%d %d", &length, &breadth);
                 area = length * breadth;
                 printf("Area of rectangle : %lf", area);
                 break;
        case 3 : printf("Enter base and height of triangle : \n");
                 scanf("%d %d", &base, &height);
                 area = 0.5 * base * height;
                 printf("Area of triangle : %lf", area);
                 break;
        default : printf("Invalid entry!");
                  break;
    }
}