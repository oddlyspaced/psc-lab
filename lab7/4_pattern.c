#include<stdio.h>

void main()
{
    int i,j,ctr=1,ctr2;
    for(i=1;i<=5;i++)
    {
        ctr2 = ctr;
        for(j=1;j<=i;j++)
        {
            printf("%d\t", ctr2);
            ctr2 = ctr2 + 2;

        }
        printf("\n");
    if(ctr%2==0)
        ctr = ctr * 1.5;
    else
        ctr = ctr * 2;
    }
    
}