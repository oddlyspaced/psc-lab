//author Hardik Srivastava (oddlyspaced)
#include<stdio.h>
#include<math.h>
void main() {
    int x1, x2, y1, y2;
    printf("Enter x :\n");
    scanf("%d %d", &x1, &x2);
    printf("Enter y :\n");
    scanf("%d %d", &y1, &y2);
    float dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    printf("%f", dist);
}