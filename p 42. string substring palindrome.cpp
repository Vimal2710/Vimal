#include<iostream>
using namespace std;
int ca(string s,int b)
{
	int i;
	string s1;
	for(i=b-1;i>=0;i--)
	{
		s1=s1+s[i];
	}
	cout<<"s is "<<s<<" snd s1 is "<<s1<<" \n";
	if(s1==s) return 1;
	else return 0;
}
int main()
{
	string a,s;
	cin>>a;
	int b;
	cin>>b;
	int n=a.length(),i,j,count=0;
	for(i=0;i<n-b+1;i++)
	{
		for(j=i;j<i+b;j++)
		{
			s+=a[j];
		}
		if(s.length()==b)
		{
			count=count+ca(s,b);
			s="";
		}
	}
	cout<<count<<" ";
	return 0;
}
