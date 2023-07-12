#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0;
	cout<<"enter number to find armstrong:";
	cin>>a;
	c=a;
	while(a>0)
	{
		b=a%10;
		sum=sum+(b*b*b);
		a=a/10;
	}
	cout<<"armstrong number is:"<<sum;
	if(c==sum)
	{
		cout<<"number is armstrong";
	}
	else
	{
		cout<<"not armstrong";
	}
	
	return 0;
	
	
}
