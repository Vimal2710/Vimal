#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	int c,d,i;
	c=a.length();
	d=b.length();
	for(i=0;i<(c|d);i++)
	{
		if(a[i])
		{
			cout<<a[i]<<" ";
		}
		if(b[i])
		{
			cout<<b[i]<<" ";
		}
	}
	return 0;
}
