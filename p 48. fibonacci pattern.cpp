#include<iostream>
using namespace std;
int ca(int arr[],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	int n;
	cin>>n;
	int l=2,i,a = 1,b = 1,sum=0,arr[n];;
	arr[0] = 1;
	arr[1] = 1;
	cout<<1<<"\n";
while(n>1)
{
	sum=a+b;
	int s = sum;
//	cout<<"l is: "<<l<<" and sum is: "<<s<<"\n";
	a=b;
	b=sum;
	n--;
//	cout<<"sum is: "<<sum<<" \n";
	arr[l] = s;
//	cout<<arr[l]<<" \n";
	ca(arr,l);
	l++;
}
cout<<"\n"<<l<<"\n";
for(i=0;i<l;i++)
{
	cout<<arr[i]<<" ";
}
	return 0;
}
