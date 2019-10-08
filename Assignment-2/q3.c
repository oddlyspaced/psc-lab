#include<stdio.h>
#include<ctype.h>
#include<math.h>
void main() {
    double angle;
    char t;
    printf("Enter angle in radians : \n");
    scanf("%lf", &angle);
    printf("Enter :\ns or S for sin(x)\nc or C for cos(x)\nt or T for tan(x)\n");
    scanf(" %c", &t);
    t = tolower(t);
    if (t == 's') {
        printf("%lf", sin(angle));
    }
    else if (t == 'c') {
        printf("%lf", cos(angle));
    }
    else if (t == 't') {
        printf("%lf", tan(angle));
    }
}
