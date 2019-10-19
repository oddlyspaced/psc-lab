// author - Amogh Biju (gamefreakoneone)
#include<stdio.h>

int main()
{
int num,rnum;
printf("Give me a number \n");
    scanf("%d",&num);
rnum=0;
while (num != 0)
  {
    rnum = rnum * 10;
    rnum = rnum + num%10;
    num = num/10;
  }

printf("%d",rnum);
return 0;
}
