#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i,c,n=a.length();
	char s1=a[0];
	//s2=a[n-1];
	for(i=1;i<n;i++)
	{
		if(a[i]==s1)
		{
			 c=i;
		}
	}
	//cout<<c<<"\n";
	for(i=1;i<c;i++)
	{
		cout<<s1;
	}
}
