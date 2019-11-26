// author - Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    int size;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter elements: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int large = array[0], small = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > large) {
            large = array[i];
        }
        else if (array[i] < small) {
            small = array[i];
        }
    }
}