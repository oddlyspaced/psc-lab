// author - Shreeyans Bahadkar (BallisticSwami)
#include<stdio.h>
void main()
{
    int i,j,ctr=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d\t", ctr++);
        printf("\n");
    }
}
