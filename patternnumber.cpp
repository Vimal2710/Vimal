#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the total number of rows : ";
	cin>>n;
	int n1=n,n2=n+1;
	int z=n;
	for(int i=1;i<=(n*2)+1;i=i+2){
		for(int k=0;k<z;k++)
		cout<<" ";
		
		for(int j=0;j<i;j++){
			if(j<i/2){
				n1++;
				cout<<n1;
				
			}
			else if(j==i/2)
			cout<<"0";
			else{
				cout<<n1;
				n1--;
			}
		}
		n1--;
		z--;
		cout<<"\n";
	}
}
