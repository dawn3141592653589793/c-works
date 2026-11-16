#include<stdio.h>
int leap(int x);
void n_leap(int x,int y);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	n_leap(a,b);
	system("pause");
	return 0;
}
int leap(int x)
{
	int z=0;
	if(x%4==0)z=1;
	return z;
}
void n_leap(int x,int y)
{
	int i;
	for(i=x;i<=y;i++)
	{
		if(leap(i)==1)
			printf("%d ",i);
	}
}