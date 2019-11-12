#include<stdio.h>
void main() {
	int size;
	printf("Enter size of array: \n");
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements: \n");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	int start, end;
	printf("Enter start and end of subarray: \n");
	scanf("%d %d", &start, &end);
	for (int i = start; i <= end; i++)
		printf("%d\t", arr[i]);
}
