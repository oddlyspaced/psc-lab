// author - Amogh Biju (gamefreakoneone)
#include<stdio.h>

int main()
{
int number,prime,noprime,a,b;
printf("Give me a number \n");
scanf("%d",&number);
    if(number==1)
    printf("The number 1 is neither a prime or a composite number \n");
    else
    {
        for(a=2;a<=number/2;a++)
        {
            if(number%a==0)
            {
               noprime=1;
                break;
            }
        }
    if(noprime==1)
    printf("It's a composite number \n");
    else printf("Its a prime number \n");
    }
    return 0;
}
