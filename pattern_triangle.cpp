#include<iostream>
using namespace std;
int main()
{
	int a,i,j,k;
	cout<<"enter number to print:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		int b=1;
		for(j=1;j<=a;j++)
		{
			if(j>=(a-i+1))
			{
				cout<<b++<<" ";
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
















