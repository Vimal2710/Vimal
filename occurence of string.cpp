/*#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string a,b,c,temp;
	int n,i,n1,n2,n3;
	cin>>n;
	/*a=(string*)malloc(sizeof(string)*n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}*/
	/*cin>>a>>b>>c;
	n=a.length();
	n1=b.length();
	n2=c.length();
	
	if(n>n1>n2)
	{
		n3=n;
	}
	if(n1>n>n2)
	{
		n3=n1;
	}
	else
	{
		n3=n2;
	}
	for(i=0;i<n3;i++)
	{
		if(a[0]>b[0] && a[0]>c[0])
		{
			if(b[0]>c[0])
		{
			//cout<<a<<" "<<b<<" "<<c;
			//temp=a;
			a=a;
			b=b;
			c=c;
		}
		else if(c[0]>b[0])
		{
			//cout<<a<<" "<<c<<" "<<b;
			a=a;
			temp=b;
			b=c;
			c=temp;
		}
			//cout<<a<<" "<<;
		}
		else if(b[0]>a[0] && b[0]>c[0])
		{
			if(a[0]>c[0])
		{
			//cout<<b<<" "<<a<<" "<<c;
			temp=a;
			a=b;
			b=temp;
			c=c;
		}
		else if(c[0]>a[0])
		{
			//cout<<b<<" "<<c<<" "<<a;
			temp=a;
			a=b;
			b=c;
			c=temp;
		}
			//cout<<a<<" "<<;
		}
		else if(c[0]>a[0] && c[0]>b[0])
		{
			if(a[0]>b[0])
		{
			//cout<<c<<" "<<a<<" "<<b;
			temp=a;
			a=c;
			c=b;
			b=temp;
		}
		else if(b[0]>a[0])
		{
			//cout<<c<<" "<<b<<" "<<a;
			temp=a;
			a=c;
			b=b;
			c=temp;
		}
			//cout<<a<<" "<<;
		}
		
	}
	cout<<a<<" "<<b<<" "<<c;
	//cout<<n3;
	return 0;
	
	
	
	
	
	
	
	/*string a;
	cin>>a;
	int b,i,j,temp;
	b=a.length();
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	for(i=0;i<b;i++)
	{
		cout<<a[i];
	}
	return 0;*/
	
	
	
	
	
	/*#include<iostream>
	using namespace std;
	int main()
	{
		string a;
		cin>>a;
		int b;
		b=a.length();
		
	}*/
//}
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n,i,j,count=0;
	string a;
	cin>>a;
	n=a.length();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
		}
		cout<<a[i]<<" is "<<count<<"\n";
		count=0;
	}
	return 0;
}
