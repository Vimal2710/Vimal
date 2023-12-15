#include<iostream>
using namespace std;
int main()
{
	string a,b,temp;
	cin>>a>>b;
	int i,j,n1,n2,s;
	n1=a.length();
	n2=b.length();
	for(i=0;i<n1-n2+1;i++)
	{
		for(j=i;j<i+n2;j++)
		{
			temp+=a[j];
		}
		if(temp==b)
		{
			cout<<"true";
			s=i;
			break;
		}
		else
		{
			temp="";
		}
	}
	cout<<temp<<" \n";
	if(temp==b)
	{
		cout<<s;
	}
	else
	{
		cout<<-1;
	}
	return 0;
}
