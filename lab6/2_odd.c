#include<stdio.h>
void main() {
    int N;
    printf("Enter number: \n");
    scanf("%d", &N);
    for (int i = N; i > 0; i--) {
        if (i%2 != 0) {
            printf("%d\n", i);
        }
    }
}