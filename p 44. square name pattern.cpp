#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i,j,n=a.length();
	cout<<n;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==n-1 && j!=0 && j!=n-1)
			{
				cout<<a[j]<<" ";
			}
			else if(j==n-1 || j==0)
			{
				cout<<a[i]<<" ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
