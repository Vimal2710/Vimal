#include<iostream>
using namespace std;
int main()
{
	int a,square,b,c,sum=0;
	cin>>a;
	c=a;
	square=a*a;
	while(square>0)
	{
		b=square%10;
		sum=sum+b;
		square=square/10;
	}
	if(c==sum)
	{
		cout<<"kaprekar";
	}
	else
	{
		cout<<"not kaprekar";
	}
	return 0;
}
