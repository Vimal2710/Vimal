#include<iostream>
using namespace std;
int main()
{
	string a,b,temp;
	cin>>a;
	cin>>b;
	int c,d,i,j,s,s1,count=0;
	c=a.length();
	d=b.length();
	for(i=0;i<c-d+1;i++)
	{
		for(j=i;j<i+d;j++)
		{
			temp+=a[j];
			s=i;
		}
		if(temp==b)
		{
			cout<<"true";
			break;
		 }
		else
		{
			temp="";
		}
	}
	cout<<"\n"<<temp<<"\n";
	if(temp==b)
	{
		cout<<s<<" ";
	}
	else
	{
		cout<<-1;
	}
	return 0;
}
