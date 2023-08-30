#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	int c,i,j,temp;
	c=a.length();
	j=0;
	for(i=c;i>=0;i--)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			b=b+a[i];
		}
	}
	//cout<<b;
	for(i=0;i<c;i++)
	{
		//for(j=0;j<b.length();j++)
		//{
			//cout<<a[i];
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			{
				//temp=a[i];
				//a[i]=b[j];
				cout<<b[j];
				j=j+1;
			}
			//j=j+1;
			else
			{
				cout<<a[i];
			}
		//}
		//else
		//{
			//cout<<a[i];
		//}
	}
	return 0;
}
