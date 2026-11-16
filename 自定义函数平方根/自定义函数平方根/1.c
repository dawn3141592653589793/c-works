#include<stdio.h>
int main()
{
	int n,a;
	int sqrt(int x);
	scanf("%d",&n);
	a=sqrt(n);
	printf("%d\n",a);
	system("pause");
	return 0;
}
int sqrt(int x)
{
	 int i,t;
	for(i=1;i<=x/2;i++)
	{
		t=1/2*(i+x/i);
		if(t==i)break;
	}
	return t;
}
