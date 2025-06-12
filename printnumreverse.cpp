#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number u want to print in reverse order:\n"<<endl;
	cin>>num;
	for(int i=num;i>=0;i--){
		cout<<i<<endl;
	}
	return 0;
}
