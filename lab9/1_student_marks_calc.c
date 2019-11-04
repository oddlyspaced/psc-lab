// Author: BallisticSwami (Shreeyans Bahadkar)
#include<stdio.h>

void main()
{
    int a[3][5],avg[5],sum[3],i,j;
	printf("Enter marks in row for 3 students in each column");
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            scanf("%d", &a[i][j]);
    printf("Total marks are: \n");
    for(i=0;i<3;i++)
        sum[i] = 0;
    i=0;
    for(j=0;j<5;j++)
        sum[i] = sum[i] + a[i][j];
    i=1;
    for(j=0;j<5;j++)
        sum[i] = sum[i] + a[i][j];
    i=2;
    for(j=0;j<5;j++)
        sum[i] = sum[i] + a[i][j];
    for(i=0;i<3;i++)
        printf("%d\t", sum[i]);
    
    for(i=0;i<5;i++)
        avg[i] = 0;
    printf("\nAverage marks of each subject are: ");
    for(j=0;j<5;j++)
        for(i=0;i<3;i++)
            avg[j] = avg[j] + a[i][j];
    for(i=0;i<5;i++)
        printf("%d\t", avg[i]/3);
    
}
