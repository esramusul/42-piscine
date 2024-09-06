#include<unistd.h>
int main(int ac ,char **av)
{
	int i;
	i=0;
	char c;
	if(ac==2)
	{
		while(av[1][i] !='\0')
		{
			if(av[1][i]<= 'z' && av[1][i]>='a')
			{
				c=av[1][i]-=32;
				write(1,&c,1);
			}
			else if(av[1][i]<= 'Z' && av[1][i]>= 'A')
			{
				c=av[1][i]+=32;
				write(1,&c,1);
			}
			else
			{
				c= av[1][i];
				write(1,&c,1);
			}
			i++;
		}
	}
	return (0);
}

