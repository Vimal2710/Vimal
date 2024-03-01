#include<iostream>
using namespace std;
int pow(int a,int b){
	int i,val=1;
	for(i=0;i<b;i++)
	{
		val = val*2;
	}
//	cout<<"a is: "<<a<<" and b is: "<<b<<" then power is: "<<val<<"\n\n";
	return val;
}
int ca(int b){
	int c,count =0,a=b;
	while(b>0){
		c = b%10;
		count =count+1;
//		cout<<c<<" ";
		b=b/10;
	}
//	cout<<count<<"\n";
//	cout<<"***************************\n";
	int arr1[count],b1=a,c1,l=0,i,sum=0,l1=count-1,a1[count],i1=0;
	while(b1>0){
		c1 = b1%10;
		arr1[l] = c1;
		b1 = b1/10;
		l++;
	}
	for(i=count-1;i>=0;i--){
//		cout<<arr1[i]<<" ";
		a1[i1] = arr1[i];
		i1++;
	}
//	cout<<"\n"<<i1<<"\n";
//	for(i=0;i<i1;i++) cout<<a1[i]<<" ";
	cout<<"*************************\n";
	for(i=0;i<i1;i++){
		sum = sum + a1[i]*pow(2,l1);l1=l1-1;
//		cout<<"sum is -> "<<sum<<" a1[i] is: "<<a1[i]<<"\n";
	}
	return sum;
}
int ca1(int val){
	int i,b,count=0,val1=val,l=0;
	while(val1>0){
		b = val1%2;
		count = count + 1;
		val1 = val1/2;
	}
	int a[count];
	while(val>0){
		b = val%2;
		a[l] = b; l++;
		val = val/2;
	}
//	cout<<"l is : "<<l<<"\n";
	cout<<"in binary format: ";
	for(i=l-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a,b,s1,s2,add,sub,c,count=0;
	cin>>a>>b;
	s1 = ca(a);
	s2 = ca(b);
	if(s1>s2) {
		add = s1+s2;
		sub = s1-s2;
	}
	else{
		add = s2+s1;
		sub = s2-s1;
	}
	cout<<"in decimal addition is: "<<add<<" and subtraction is: "<<sub<<"\n";
	cout<<"for addition ";ca1(add);
	cout<<"\n";
	cout<<"for subtraction ";ca1(sub);
	return 0;
}
