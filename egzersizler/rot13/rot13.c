#include<unistd.h>
void rot13(char *str)
{
	int i;
	i=0;
	while(str[i]!= '\0')
	{
		if((str[i]<='z' && str[i]>='n') || (str[i]<= 'Z' && str[i]>= 'N'))
			str[i]-=13;
		else if ((str[i]>='a' && str[i]<'n') || (str[i]>='A' && str[i]<'N'))
			str[i]+=13;
		write(1,&str[i],1);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac==2)
		rot13(av[1]);
	write(1,"\n",1);
}

