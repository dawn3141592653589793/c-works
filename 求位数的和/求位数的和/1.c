#include<stdio.h>
int wsh(int x);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",wsh(n));
	system("pause");
	return 0;
}
int wsh(int x)
{
	int t,y;
	if(x<10) return x;
	else 
		{
			t=x%10;
	        y=wsh(x/10)+t;
	    }
	return y;
}