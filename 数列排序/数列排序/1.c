#include<stdio.h>
main()
{
	int zhiz(int a[],int n);
	void main__max(int a[],int n);
	void shuchu(int a[],int n);
	int a[10]={6,9,3,0,4,1,8,5,8,2};
	int*p,i;
	p=a;
	zhiz(p,10);
	p=a;
	for(;p<p+9;p++)
		printf("%2d",*p);
	system("pause");
	return 0;
}
void main__max(int a[],int n)
{
	int i,j,k;
	for(i=0;i<=n-2;i++)
	{
		for(j=i;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				k=a[j];a[j]=a[i];a[i]=k;
			}
		}
	}
}
void shuchu(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%2d",a[i]);
}
int zhiz(int *p,int n)
{
	int *k;
	int i;
	k=p+1;
	for(;p<p+n-2;)
	{
		for(;k<k+n-1;k++)
		{
			if(*p>*k)
			{
				i=*k;*k=*p;*p=i;
			}
		}
		p=p+1;
		k=p+1;
	}
	return p;
}