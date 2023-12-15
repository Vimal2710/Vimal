#include<iostream>
using namespace std;
int ca1(int a[],int sum,int s,int max)
{
	int i;
	//cout<<"s is "<<s<<" sum is "<<sum<<" \n";
	//cout<<max;
	for(i=0;i<9;i++)
	{
		//cout<<sum<<" \n";
		if(sum==a[i])
		{
			//cout<<"a[i] is "<<a[i]<<" and s is "<<s<<" sum is "<<sum<<" \n";
			//break;
			cout<<sum<<" ";
			return 1;
			//if(max==sum) cout<<sum<<" ";
		}
	}
}
int ca(int a[],int s,int max)
{
	int i,sum=0,ret=1;
	for(i=1;i<max;i++)
	{
		if(s==max)
		{
			sum=s;
			//ca1(a,sum,s,max);
		}
		else
		{
		sum=s+i;
	}
		ret=ca1(a,sum,s,max);
		if(ret==1) break;
		if(ret==0) ca1(a,sum,s,max);
		}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=9,i,b[n],temp=0;
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n";
	for(i=0;i<n;i++) b[i]=a[i];
	int max=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
		{
			temp=b[i];
			b[i]=max;
			max=temp;
		}
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		int s=a[i];
		ca(a,s,max);
	}
}
