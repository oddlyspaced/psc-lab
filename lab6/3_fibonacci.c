// author - Amogh Biju (gamefreakoneone)
#include<stdio.h>
int main()
{
int num,num1,num2,i,nxt;
printf("how many terms do you want? \n");
scanf("%d",&num);
for(num1=0,num2=1,i=1;i<=num;i++)
    {
        //printf("%d",num1);
        nxt=num1+num2;
        num1=num2;
        num2=nxt;
        printf("%d ", num2);
    }
}
