#include<iostream>
using namespace std;
int ca(string a)
{
	if(a=="one") cout<<"1";
	if(a=="two") cout<<"2";
	if(a=="three") cout<<"3";
	if(a=="four") cout<<"4";
	if(a=="five") cout<<"5";
	if(a=="six") cout<<"6";
	if(a=="seven") cout<<"7";
	if(a=="eight") cout<<"8";
	if(a=="nine") cout<<"9";
}
int main()
{
	string a,s;
	getline(cin,a);
	int i,n=a.length();
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			s=s+a[i];
		}
		if(a[i]==' ' || i==n-1)
		{
			ca(s);
			s="";
		}
	}
	return 0;
}
