#include<iostream>
using namespace std;
int ca(char a)
{
	switch(a)
	{
		case 'i':
			return 1;
		case 'v':
			return 5;
		case 'x':
			return 10;
		case 'l':
			return 50;
		case 'c':
			return 100;
		case 'd':
			return 500;
		case 'm':
			return 1000;
	}
}
int main()
{
	string a;
	cin>>a;
	int n=a.length(),i,sum=0;
	sum=ca(a[n-1]);
	for(i=n-2;i>=0;i--)
	{
		if(ca(a[i]) >= ca(a[i+1]) )	sum+=ca(a[i]);
		else	sum-=ca(a[i]);
	}
	cout<<sum<<" ";
	return 0;
}
