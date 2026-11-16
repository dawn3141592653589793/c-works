#include<stdio.h>
int gys(int x,int y);
int gbs(int x,int y);
int main()
{
	int a,b;
	scanf("%d%%d",&a,&b);
	printf("最大公约数=%d\n最小公倍数=%d\n",gys(a,b),gbs(a,b));
	system("pause");
	return 0;
}
int gys(int x,int y)
{
	int i;
	while(x%y!=0)
	{
		i=x%y;
		x=y;
		y=i;
	}
	return y;
}
int gbs(int x,int y)
{
	return (x*y)/gys(x,y);
}