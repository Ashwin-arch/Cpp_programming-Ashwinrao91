#include<iostream>
#include<stack>
using namespace std;
 
int main(){
	stack<char> s;

	string str="Data Science";

	for(char c: str){
		s.push(c);
	}
        cout<<"Reversed String:";
	while(!s.empty()){
		cout<< s.top();
		s.pop();
	}
	cout<<endl;
	return 0;
}
