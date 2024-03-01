#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"enter number of rows and columns:	";
	cin>>n;
	int arr[n][n],a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"the given array is:\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"after taking transpose:\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[j][i]<<" ";
			a[i][j]=arr[j][i];
		}
		cout<<"\n";
	}
	cout<<"after taking 90deg:\n";
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
