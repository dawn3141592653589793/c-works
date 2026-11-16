#include<stdio.h>
int main()
{
	char concatenated_arrage(char x[],char y[]);
	int i;
	char a[50],b[50];
	char message[100];
	gets(a);
	gets(b);
	concatenated_arrage(a,b);
	puts(a);
	system("pause");
	return 0;
}
char concatenated_arrage(char x[],char y[])
{
	int i,j;
	for(i=0;;i++)
	{
		if(x[i]=='\0')
		{
			for(j=0;;j++,i++)
			{
				x[i]=y[j];
				if(y[j]=='\0')
					break;
			}
			break;
		}
	}
	return x;
}
