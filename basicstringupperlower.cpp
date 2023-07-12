#include<iostream>
using namespace std;
int main()
{
	string a,c;
	cin>>a;
	int b,i;
	b=a.length();
	for(i=0;i<b;i++)
	{
		if((int)a[i]>=65 && (int)a[i]<=90)
		{
			c[i]=(int)a[i]+32;
		}
		else if((int)a[i]>=97 && (int)a[i]<=122)
		{
			c[i]=(int)a[i]-32;
		}
		else
		{
			c[i]=1;
		}
	}
	for(i=0;i<b;i++)
	{
		cout<<c[i];
	}
	return 0;
}
