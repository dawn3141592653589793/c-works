#include<stdio.h>
int main()
{
	int i,n,x=0;
	for(n=3;n<=1000;n++,x=0)
	{
	    for(i=1;i<=n/2;i++)
	    {
		if(n%i==0) x=x+i;
	    }
		if(x==n)
			{
				printf("%d its factor are ",n);
				for(i=1;i<=n/2;i++)
				{
					if(n%i==0) printf("%d,",i);
				}
				printf("\n");
		    }
	}
	system("pause");
	return 0;
}