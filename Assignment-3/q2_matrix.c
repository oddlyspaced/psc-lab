#include<stdio.h>
void main() {
    int h, w;
    printf("Enter height and width: \n");
    scanf("%d %d", &h, &w);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 | i == h-1 | j == 0 | j == w-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}