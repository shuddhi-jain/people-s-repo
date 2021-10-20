#include<stdio.h>
int main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&& ch<='Z'))
	{
	printf("It is an alphabet\n");
	if(ch>='a' &&ch<='z')
		printf("%c's lowercase conversion:%c,%c",ch,toupper(ch));
		else
			printf("%c'slowercase conversation:%c,%c",ch,tolower(ch));
		
 }
	else if(ch>='0'&&ch<='9')
	{	
	printf("it is a digit");
}
	else
	{
	printf("it is a speacial character");
}
}
	

