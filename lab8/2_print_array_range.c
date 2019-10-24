#include<stdio.h>

void main()
{
    int a[100],i,idx1,idx2,len;
    printf("Enter 2 indexes: ");
    scanf("%d %d",  &idx1, &idx2);
    printf("Enter length of array and array: ");
    scanf("%d", &len);
    for(i=0;i<len;i++)
        scanf("%d", &a[i]);
    for(i=idx1;i<=idx2;i++)
        printf("%d\t",a[i]);
}