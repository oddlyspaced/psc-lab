// Enter name and marital status then print mrs and miss accordingly
// author - Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    char name[100];
    printf("Enter name : \n");
    scanf(" %s", name);
    int m = 0;
    printf("Enter 1 for married, 0 for single.\n");
    scanf(" %d", &m);
    if (m == 1) {
        printf("Mrs. ");
    }
    else {
        printf("Miss ");
    }
    printf("%s\n", name);
}
