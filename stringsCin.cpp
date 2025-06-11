#include<iostream>
using namespace std;

int  main(){
	char s[20];

	cout<< "Enter the required string u want to display"<<endl;
	cin>>s;

	cout<<"The typed string is:"<<s<<endl;



/* Accessing the string elements*/
int num;
cout <<"Enter the index til u want to access the string:"<< endl;
cin>>num;
cout<<"Accessing the string till"<<num<<"position"<<endl;
for(int i=0;i<num;i++){
	cout<<s[i]<<endl;
}
/*Removing the desired strings characters and displaying it again*/
cout<<"Enter the index till u want to delete and display it again"<<endl;
cin>>num;
cout<<"the string till position"<<num<<"is:"<<endl;
for(int i=num;s[i]!='\0';i++){
	cout<<s[i];


}
cout<<endl;

return 0;
}
