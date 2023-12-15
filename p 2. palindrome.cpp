#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0;
	int palin=0;
	cin>>a;
	b=a;
	while(a>0)
	{
		c=a%10;
		sum=(10*sum)+c;
		a=a/10;
	}
	cout<<sum<<"\n";
	palin=b+sum;
	cout<<palin;
	return 0;
}
