#include<iostream>
using namespace std;
int prime(int val,int start){
	cout<<"start is: "<<start<<" and value is: "<<val<<"\n";
	if(start == val){
		return 1;
	}
	else{
	if(val % start == 0){
		cout<<"**\n";
		return 0;
	}
	else{
		cout<<"***\n";
		prime(val,start+1);
	}
}
}
int main(){
	int a;
	cin>>a;
	cout<<prime(a,2);
	return 0;
}
