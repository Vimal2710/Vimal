#include<iostream>
using namespace std;
int ca(string a,string b)
{
	int i,j,n1=b.length(),temp=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	int n=a.length();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(a==b)
	{
		//cout<<"true";
		return 1;
	}
	else return 0;
}
int main()
{
	string b,a[]={"catch","got","tiger","mat","eat","pat","tap","tea"};
	int n=8,i,s,count=1;
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n\n";
	cin>>b;
	for(i=0;i<n;i++)
	{
	     s=ca(a[i],b);
	     if(s==1)
		 {
		 	count=1;
		 	break;
		 }
	     else 
		 {
		 	count=0;
		 	s=ca(a[i],b);
		 }
	}
	if(count==1) cout<<"true";
	else cout<<"false";
	return 0;
}
