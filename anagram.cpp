#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	/*int i,j,count=0;
	for(i=0;i<a.length();i++)
	{
		for(j=0;j<b.length();j++)
		{
			if(a[i]==b[j])
			{
				count=count+1;
			}
		}
	}
	if(count==a.length())
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}*/
	
	int c,d,i,j,temp=0;
	c=a.length();
	d=b.length();
	if(c==d)
	{
		for(i=0;i<c;i++)
		{
			for(j=i+1;j<c;j++)
			{
				if(a[i]>a[j])
				{
		         
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			}
		}
		for(i=0;i<d;i++)
		{
			for(j=i+1;j<d;j++)
			{
				if(b[i]>b[j])
				{
				
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
			}
		}
	}
	else
	{
		cout<<"not anagram";
	}
	cout<<a<<" "<<b<<"\n";
	if(a==b)
	{
		cout<<"anagram";
	}
	else
	{
		cout<<"not anagram";
	}
	return 0;
}
