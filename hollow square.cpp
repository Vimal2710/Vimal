#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cin>>a;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i==0||j==0||i==a-1||j==a-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
