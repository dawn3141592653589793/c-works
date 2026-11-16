#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i,z,x,y;
	printf("请输入剪刀(1)，石头(2)或布(3)：\n");
	scanf("%d",&x);
	for(i=1;i<=100;i++,y=0)
	{
		srand(time(NULL));
		y=rand()%3+1;
		switch(x)
		{
		case 1: switch(y)
				  {
		           case 1:z=2;break;
				   case 2:z=3;break;
				   case 3:z=1;break;
				  }
				break;
		case 2: switch(y)
				  {
		           case 1:z=1;break;
				   case 2:z=2;break;
				   case 3:z=3;break;
				  }
				break;
	    case 3: switch(y)
				  {
		           case 1:z=3;break;
				   case 2:z=1;break;
				   case 3:z=2;break;
				  }
				break;
		default:printf("数据错误！");
		}
		printf("电脑：%d ",y);
		switch(z)
		{
		case 1: printf("胜\n");break;
		case 2: printf("平\n");break;
		case 3: printf("输\n");break;
		}
		scanf("%d",&x);
	}
	system("pause");
	return 0;
}
