// Author: BallisticSwami (Shreeyans Bahadkar)

#include<stdio.h>

void main()
{
    int a[100],num,len,i,flag=0;
    printf("Enter length of array, array and number: ");
    scanf("%d", &len);
    for(i=0;i<len;i++)
        scanf("%d", &a[i]);
    scanf("%d", &num);
    for(i=0;i<len;i++)
    {
        if(a[i]==num)
            flag = 1;
    }
    if (flag==1)
        printf("Number is available in array");
    else
        printf("Number is not available in array");

}
