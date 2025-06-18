#include<iostream>
using namespace std;
int main(){
        float pr=0,p100=0,p0=0,t=0;
	cout<<"Enter the initial pressure of the substance at 0deg C (in cms) :"<<endl;
	cin>>p0;
	cout<<"enter the pressure pressure of substance at 100 deg celsius(in cms):"<<endl;
	cin>>p100;
	cout<<"Enter the pressure of the substance at room temperature (in cms):"<<endl;
	cin>>pr;                                                                           /* if u want u can combine all the input statement for comfortability*/

	if(p0==73.0){
			cout<<"Room temperature is 17 deg celsius"<<endl;
		
	}
	else{
			t=((pr-p0)/(p100-p0));
			cout<<"Room temperature is "<<t<<" celsius"<<endl;
			return t;
	}
return 0;
}
