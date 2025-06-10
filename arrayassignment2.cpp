#include<iostream>
using namespace std;

int main(){
	int i,sum=0,n=0;

	cout<<"Enter the Array Elements:"<<endl;
	cin>>n;
	
	int arr[n];

	for(i=0;i<n;i++){
		cin>>arr[i];

	}
	int min=arr[0],max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min) min=arr[i];
		if(arr[i]>max)max=arr[i];
		sum +=arr[i];

	}
	double average=(double)sum/n;

	cout<<"\n minimum:"<<min<<endl;
	cout<<"Maximum:"<<max<<endl;
	cout<<"Sum:"<<sum<<endl;
	cout<<"Average:"<<average<<endl;

	return 0;

}
