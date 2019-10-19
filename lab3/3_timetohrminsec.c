//author Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    int sec;
    scanf("%d", &sec);
    float min = sec / 60.0;
    float hr = min / 60.0;
    printf("%d seconds is equal to %0.2f minute(s) and %0.2f hour(s)", sec, min, hr);
}