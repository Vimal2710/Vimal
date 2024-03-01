#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i,j,n=a.length();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || i+j==n-1)
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
