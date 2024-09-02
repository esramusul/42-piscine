#include<stdio.h>
int atoi(char *str)
{
	int i;
	int sign;
	int result;
	i=0;
	sign=1;
	result=0;
	while(str[i]== 32 || str[i]<=13 && str[i]>=9)
	{
			i++;
	}
	while (str[i]=='-' || str[i]== '+')
	{
		if(str[i]=='-')
			sign*=-1;
		i++;
	}
	while(str[i]!='\0' && str[i]<='9' && str[i]>= '0')
	{	
		result =(result *10)+(str[i]-'0');
		i++;
	}
	return(result * sign);
}
int main()
{
	char str[]="      ++-++-+-+--1234";
	printf("%d",atoi(str));
}
