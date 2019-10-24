#include<stdio.h>

void main()
{
    int a[100],i,len,temp;
    printf("Enter length of array and array: ");
    scanf("%d", &len);
    for(i=0;i<len;i++)
        scanf("%d", &a[i]);
    for(i=0;i<=len/2;i++)
        {
            temp = a[i];
            a[i] = a[len-1-i];
            a[len-1-i] = temp;
        }
    for(i=0;i<len;i++)
        printf("%d\t", a[i]);
}