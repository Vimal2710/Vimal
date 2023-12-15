#include<iostream>
using namespace std;
int main()
{
	int a,b,count=0;;
	cin>>a;
	int a1=a;
	while(a>0)
	{
		b=a%8;
		count=count+1;
		a=a/8;
	}
	int j,c[count];
	int i=0;
	while(a1>0)
	{
		b=a1%8;
		c[i]=b;
		a1=a1/8;
		i++;
	}
	for(j=count-1;j>=0;j--)
	{
		cout<<c[j]<<" ";
	}
	return 0;
}
