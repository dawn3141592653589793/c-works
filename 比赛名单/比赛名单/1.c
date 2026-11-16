#include<stdio.h>
int main()
{
	char a,b,c;
	for(a='X';a<='Z';a++)
	{
		if(a!='X')
		{
			for(b='X';b<='Z';b++)
			{
				if(a!=b)
				for(c='X';c<='Z';c++)
				{
					if((c!=a)&&(c!=b)&&(c!='X')&&(c!='Z'))
						printf("A VS %c\nB VS %c\nC VS %c\n",a,b,c);
				}
			}
		}
	}
	system("pause");
	return 0;
}