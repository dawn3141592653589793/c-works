#include<stdio.h>
int main()
{
	int n=0,b,i,a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	scanf("%d",&b);
	for(i=0;i<15;i++)
	{
		if(b==a[i])
			{
				n=1;
				break;
		}
	}
	if(n==1)printf("此数位于数组第%d个元素\n",++i);
		else printf("无此数\n");
	system("pause");
	return 0;
}