#include<iostream>
using namespace std;
int ca_descending_order(int a[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n\nthe given array contain in descending order:";
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n\n";
}
int ca_ascending_order(int a[],int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n\nthe given array contain in ascending order:";
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n\n";
}
int ca_delete_at_position(int a[],int n,int pos)
{
	int i;
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	return n;
}
int ca_delete_at_first(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	return n;
}
int ca_delete_at_last(int a[],int n)
{
	n--;
	return n;
}
int ca_insert_at_position(int a[],int n,int pos,int val)
{
	int i;
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	n++;
	a[pos]=val;
	return n;
}
int ca_insert_at_first(int a[],int n,int val)
{
	int i;
	int l=a[n-1];
	for(i=n-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	n++;
	a[0]=val;
//	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n";
	return n;
}
int ca_disp(int a[],int n)
{
	int i;
	cout<<"\n\nthe given array contain:";
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n\n";
}
int ca_insert_at_last(int a[],int n,int val)
{
	int i;
	a[n]=val;
	n++;
	//ca_disp(a,n);
	cout<<"\n";
	return n;
}
int main()
{
	int n;
	cin>>n;
	int a[n],i,n1;
	for(i=0;i<n;i++) cin>>a[i];
	while(1)
	{
		int choice,val,pos;
//		cout<<"the given array contain:\n";
//		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<"\n1.insert at last: \n2.display: \n3.insert at first: \n4.insert at position: \n5.delete at last: \n6.delete at first: \n7.delete at position: \n8.ascending order: \n9.descending order: \n10.exit\n\nenter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter the element to insert at last: ";
				cin>>val;
				n1=ca_insert_at_last(a,n,val);
				n=n1;
				break;
			case 2:
				ca_disp(a,n);
				break;
			case 3:
				cout<<"enter the element to insert at first: ";
				cin>>val;
				n1=ca_insert_at_first(a,n,val);
				n=n1;
				break;
			case 4:
				cout<<"enter the pos:(starts at "<<"0 and end at "<<n<<": ) ";
				cin>>pos;
				cout<<"enter the element to insert at the position: ";
				cin>>val;
				n1=ca_insert_at_position(a,n,pos,val);
				n=n1;
				break;
			case 5:
				n1=ca_delete_at_last(a,n);
				n=n1;
				break;
			case 6:
				n1=ca_delete_at_first(a,n);
				n=n1;
				break;
			case 7:
				cout<<"enter the pos:(starts at "<<"0 and end at "<<n<<": ) ";
				cin>>pos;
				n1=ca_delete_at_position(a,n,pos);
				n=n1;
				break;
			case 8:
				ca_ascending_order(a,n);
				break;
			case 9:
				ca_descending_order(a,n);
				break;
			case 10:
				exit(0);
				break;
			default:
				cout<<"\n\nenter correct choice: \n\n";	
		}
	}
	return 0;
}
