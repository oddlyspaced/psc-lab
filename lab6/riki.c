#include<stdio.h>
void main() {
	int n, i; scanf("%d", &n);
	if (n%2 == 0) n -= 1;
	for (i = n; i>=1; i = i -2 )printf("%d ", i);
}
