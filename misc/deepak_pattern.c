// author - Hardik Srivastava (oddlyspaced)
//   0 1 2 3 4
// 0 3 3 3 3 3
// 1 3 2 2 2 3
// 2 3 2 1 2 3
// 3 3 2 2 2 3
// 4 3 3 3 3 3
#include<stdio.h>
void print(int arr[5][5]);
void main() {
    int arr[5][5];
    for (int i = 0; i < 5;i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 0;
        }
    }
    int size = 5;
    int start = 3;
    int r = 0, c = 0;
    while (c < 3) {
        // top half
        for (int j = c; j < size - c; j++) {
            arr[r][j] = start;
        }
        // bottom half
        for (int j = c; j < size - c; j++) {
            arr[size - 1 - r][j] = start;
        }
        // left half
        for (int i = r; i < size - r; i++) {
            arr[i][c] = start;
        }
        // right half
        for (int i = r; i < size - r; i++) {
            arr[i][size - 1 - c] = start;
        }
        c++;
        r++;
        start--;
    }
    print(arr);
}

void print(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}