#include<iostream>
using namespace std;
int ca(string b)
{
	string s;
	int n=b.length(),i;
	for(i=n-1;i>=0;i--) s=s+b[i];
	if(b!=s) cout<<b<<" ";
}
int main()
{
	string a,b;
	getline(cin,a);
	int n=a.length(),i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			b=b+a[i];
		}
		if(a[i]==' ' || i==n-1)
		{
			//cout<<b<<" ";
			ca(b);
			b="";
		}
	}
	return 0;
}
