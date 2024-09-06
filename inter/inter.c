#include<unistd.h>
int  check(char *str, char c, char poss)
{
	int i;
	i=0;
	while(i<poss)
	{
		if(str[i]==c)
			return (0);
		i++;
	}
	return (1);
}

void inter(char *str,char *str1)
{
	int i;
	int a;
	i=0;

	while(str[i]!='\0')
	{
		a=0;
		while(str1[a]!='\0')
		{
			if(str[i]== str1[a])
			{
				if(check(str,str[i],i)==1)
				{
					write(1,&str[i],1);
					break;
				}
			}
			a++;
		}
		i++;
	}
	write(1,"\n",1);
}
int main(int ac, char **av)
{
	if(ac==3)
		inter(av[1],av[2]);
	return(0);
}




