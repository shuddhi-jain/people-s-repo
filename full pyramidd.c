#include<stdio.h>
int main()
{
	int i,j,k,s=4,l;
	for(i=1;i<=9;i+=2)
	{
		for(k=1;k<=s;k++)
         printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		s--;
        printf("\n");
    }
        s=1;
        for(i=1;i<=7;i+=2)
        {
		
     	for(j=1;j<=s;j++)
     		printf(" ");
		 	for(k=7;k>=i;k--)
     	printf("*");
		printf("\n");
       	s++;
		}
	}

