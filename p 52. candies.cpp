#include<iostream>
using namespace std;
int ca(int a[],int sum,int n){
	int i,count = 0;
	for(i=0;i<n;i++){
		if(sum>=a[i]){
			count=count+1;
		}
	}
	if(count==n) cout<<"true ";
	else cout<<"false ";
}
int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\n";
	int find,sum=0;
	cin>>find;
	for(i=0;i<n;i++){
		sum = a[i]+find;
		ca(a,sum,n);
	}
}
