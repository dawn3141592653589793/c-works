#include<stdio.h>
int main()
{
	void mdu(int a[],int n);
	void mxu(int a[],int n);
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	mdu(a,10);
	mxu(a,10);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	system("pause");
	return 0;
}
void mdu(int a[],int n)
{
	int *p=a,k=a[0],i;
	for(i=1;i<n;i++)
	{
		if(k<a[i])
		{
			k=a[i];
			p=&a[i];
		}
	}
	*p=a[n-1];a[n-1]=k;
}
void mxu(int a[],int n)
{
	int *p=a,k=a[0],i;
	for(i=1;i<n;i++)
	{
		if(k>a[i])
		{
			k=a[i];
			p=&a[i];
		}
	}
	*p=a[0];a[0]=k;
}