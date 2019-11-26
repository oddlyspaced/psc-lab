#include<stdio.h>
void main() {
    int rows, columns;
    printf("Enter rows and column of array: \n");
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];
    printf("Enter elements: \n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &arr[i][j]);
    printf("Enter element to search: \n");
    int element;
    scanf("%d", &element);
    int occ = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            if (arr[i][j] == element)
                occ++;
    if (occ == 0) {
        printf("%d, not found in array!", element);
    }
    else {
        printf("%d found %d times in array.", element, occ);
    }
}