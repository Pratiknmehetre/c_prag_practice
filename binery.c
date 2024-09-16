#include<stdio.h>
void main()
{
int num,pos=31;

printf("enter the number\n");
scanf("%d",&num);

L1:
while(pos>=0)
{
printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");
pos--;
}
if(pos>0)
goto L1;
printf("\n");
}
