#include<unistd.h>
void rotone(char *str)
{
	int i;
	i=0;
	while(str[i]!= '\0')
	{
		if((str[i]<='y' && str[i]>='a') || (str[i]<= 'Y' && str[i]>= 'A'))
			str[i]+=1;
		else if (str[i]=='z' || str[i]=='Z')
			str[i]-=25;
		write(1,&str[i],1);
		i++;
	}
}

int main(int ac , char **av)
{
	if(ac==2)
		rotone(av[1]);
	write(1,"\n",1);
}

