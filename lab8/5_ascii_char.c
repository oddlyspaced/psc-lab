#include<stdio.h>
void main() {
	int size;
	printf("Enter size of char array: \n");
	scanf("%d", &size);
	char arr[size];
	printf("Enter characters: \n");
	for (int i = 0; i < size; i++)
		scanf(" %c", &arr[i]);
	printf("ASCII CODES :\n");
	for (int i = 0; i < size; i++)
		printf("%d\n", (int)arr[i]);
}
