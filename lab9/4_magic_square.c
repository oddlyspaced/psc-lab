#include<stdio.h>
void main() {
    int size;
    printf("Enter size of array: \n", &size);
    scanf("%d", &size);
    int arr[size][size];
    printf("Enter elements: \n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf(" %d", arr[i][j]);
        }
    }
    int sums[size*2 + 2];
    for (int i = 0; i < size*2+2; i++)
    sums[i] = 0;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = 0; j < size; j++) {
            sum = sum + arr[i][j];
        }
        sums[counter++] = sum;
    }

    for (int j = 0; j < size; j++) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + arr[i][j];
        }
        sums[counter++] = sum;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i][i];
    }
    sums[counter++] = sum;

    sum = 0;
    int i = 0, j = size - 1;
    for (;j >= 0;) {
        sum = sum + arr[i][j];
        j--;
        i++;
    }

    sums[counter++] = sum;

    for (int i = 0; i < size*2 + 2; i++)
    printf("%d\n", sums[i]);

}