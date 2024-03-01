#include<iostream>
using namespace std;
int main(){
	int a[]={5,6,0,9,0,8};
	int n=6,i,j=0;
	for(i=0;i<n;i++){
		if(a[i]!=0){
			swap(a[i],a[j]);
			j++;
		}
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++) cout<<a[i]<<" ";
}
