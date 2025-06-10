#include<iostream>
using namespace std;

int main(){
	int num=0,i=0 ;
	int arr[100]={};

	cin>>num;

	cout<<"Enter the array elements:\n"<<endl;

	for(i=0;i<num;i++){
		cin>>arr[i];

	}
	cout <<"Printing the array elements\n:"<< endl;
	for(i=0;i<num;i++){
		cout<<"Elements at "<<"index :"<< i << "of array is: "<<arr[i]<<endl;
	}
	return 0;
}
