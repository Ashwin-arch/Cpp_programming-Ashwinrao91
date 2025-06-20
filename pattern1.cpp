/*Square Pattern*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Square Pattern:Enter the no of lines to print:\n"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<j;
		}
		cout<<endl;// To print newLine.
	}
	return 0;
}
