/*#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,i,d,count=0;
	int count1=0;
	int j=1;
	int k=1;
	int temp=0;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			//cout<<a[i]<<" ";
			count=count+1;
		}
		else
		{
			//cout<<a[i]*2<<" ";
			count1=count1+1;
		}
	}
	cout<<"\n"<<count<<" "<<count1<<"\n";
	int b[count];
	int c[count1];
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	cout<<"\n"<<j<<" "<<k<<"\n";
	cout<<"\n";
	for(i=1;i<=count;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<=count1;i++)
	{
		cout<<c[i]<<" ";
	}
	//sort(b.begin(),b.end());
	//sort(c.begin(),c.end());
	for(i=1;i<=count;i++)
	{
		for(d=i+1;d<=count;d++)
		{
			if(b[i]<b[d])
			{
				temp=b[i];
				b[i]=b[d];
				b[d]=temp;
			}
		}
	}
	cout<<"\nsort after\n";
	for(i=1;i<=count;i++)
	{
		cout<<b[i]<<" ";
	}
	for(i=1;i<=count;i++)
	{
		for(d=i+1;d<=count1;d++)
		{
			if(c[i]>c[d])
			{
				temp=c[i];
				c[i]=c[d];
				c[d]=temp;
			}
		}
	}
	cout<<"\nsort after\n";
	for(i=1;i<=count1;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		if(b[i] && i<=count)
		{
			cout<<b[i]<<" ";
		}
		if(c[i] && i<=count1)
		{
			cout<<c[i]<<" ";
		}
	}
	return 0;
	
}*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,count=0;
	int count1=0;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n*";
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			count=count+1;
		}
		else
		{
			count1=count1+1;
		}
	}
	int odd[count1];
	int even[count];
	int x=1;
	int y=1;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even[x]=a[i];
			x++;
		}
		else
		{
			odd[y]=a[i];
			y++;
		}
	}
	
	cout<<count<<" "<<count1<<" \n";
	cout<<"\n";
	for(i=1;i<=count1;i++)
	{
		cout<<odd[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<=count;i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<=count1;i++)
	{
		for(j=i+1;j<=count1;j++)
		{
			if(odd[i]<odd[j])
			{
				temp=odd[i];
				odd[i]=odd[j];
				odd[j]=temp;
			}
		}
	}
	cout<<"odd:\n";
	for(i=1;i<=count1;i++)
	{
		cout<<odd[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<=count;i++)
	{
		for(j=i+1;j<=count;j++)
		{
			if(even[i]>even[j])
			{
				temp=even[i];
				even[i]=even[j];
				even[j]=temp;
			}
		}
	}
	cout<<"even:\n";
	for(i=1;i<=count;i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		if(odd[i] && i<=count1)
		{
			cout<<odd[i]<<" ";
		}
		if(even[i] && i<=count)
		{
			cout<<even[i]<<" ";
		}
	}
	return 0;
	
}
