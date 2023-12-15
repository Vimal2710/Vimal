/*#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,max,pos,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			pos=i;
		}
	}
	cout<<max;
	for(i=0;i<n;i++)
	{
		if(a[i]*2<=max && i!=pos)
		{
			cout<<"true ";
			count=count+1;
		}
	}
	if(count==n-1)
	{
		cout<<pos;
	}
	else
	{
		cout<<-1;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,pos,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			pos=i;
		}
	}
	cout<<"\n"<<"max is "<<max<<" in pos "<<pos<<"\n";
	for(i=0;i<n;i++)
	{
		if(a[i]*2<=max && i!=pos)
		{
			cout<<"true";
			count=count+1;
		}
	}
	if(count==n-1)
	{
		cout<<pos;
	}
	else
	{
		cout<<-1;
	}
	return 0;
	
}
