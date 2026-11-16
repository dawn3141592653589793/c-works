#include<iostream>
#include<ctime>
#include<random>
int main()
{
	for(int i=0;i<10;i++)
	{
		std::default_random_engine e;
		e.seed(time(0));
		std::cout<<e()<<std::endl;
	}
	return 0;
}
