/*#include<iostream>
using namespace std;
int ca1(int b1,int count,int oricount)
{
	int i=1,j,arr[oricount],c,b2=b1;
	while(b1>0)
	{
		c=b1%2;
		arr[i]=c;
		i++;
		b1=b1/2;
	}
	int gencount=oricount-count;
	//cout<<b2<<" is original value is "<<oricount<<" gen value is "<<gencount<<"\n";
	for(j=count+1;j<=oricount;j++)  arr[j]=0;
	for(j=oricount;j>0;j--) cout<<arr[j]<<" ";
	cout<<"\n";
}
int ca(int b,int count1)
{
	int b1=b,c,count=0,oricount=count1;
	while(b>0)
	{
		c=b%2;
		b=b/2;
		count=count+1;
	}
	ca1(b1,count,oricount);
	//cout<<b1<<" is "<<count<<" \n";
}
int main()
{
	int a,i,b=1;
	cin>>a;
	int a1=a-1,count1=0,b1;
	while(a1>0)
	{
		a1=a1/2;
		count1=count1+1;
	}
	for(i=0;i<count1;i++) cout<<"0 ";
	cout<<"\n";
	while(a>b)
	{
		ca(b,count1);
		//cout<<b<<" ";
		b++;
	}
	return 0;
}*/


#include<iostream>
using namespace std;
int ca1(int b1,int count,int oricount)
{
	int i=1,j,arr[oricount],c,b2=b1;
	while(b1>0)
	{
		c=b1%2;
		arr[i]=c;
		i++;
		b1=b1/2;
	}
	int gencount=oricount-count;
	//cout<<b2<<" is original value is "<<oricount<<" gen value is "<<gencount<<"\n";
	for(j=count+1;j<=oricount;j++)  arr[j]=0;
	for(j=oricount;j>0;j--) cout<<arr[j]<<" ";
	cout<<"\n";
}
int ca(int b,int count1)
{
	int b1=b,c,count=0,oricount=count1;
	while(b>0)
	{
		c=b%2;
		b=b/2;
		count=count+1;
	}
	ca1(b1,count,oricount);
	//cout<<b1<<" is "<<count<<" \n";
}
int main()
{
	int a,a1=1,i,b=1;
	cin>>a;
	int count1=a,b1;
	for(i=1;i<=count1;i++)	a1=a1*2;
	//cout<<a;
	for(i=0;i<count1;i++) cout<<"0 ";
	cout<<"\n";
	while(a1>b)
	{
		ca(b,count1);
		//cout<<b<<" ";
		b++;
	}
	return 0;
}
