#include<iostream>
using namespace std;
int main()
{
	int a,b,sum=0;
	cout<<"enter number to fing sum of digit:";
	cin>>a;
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	cout<<"sum of digit is:"<<sum;
	return 0;
}
