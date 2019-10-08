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
    switch(t) {
        case 's' : printf("%lf", sin(angle));
                   break;
        case 'c' : printf("%lf", cos(angle));
                   break;
        case 't' : printf("%lf", tan(angle));
                   break;
        default  : printf("Inavlid choice\n");
                   break;
    }
}
