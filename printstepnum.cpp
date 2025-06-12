#include<iostream>
using namespace std;

int main(){
	int i,num,m;
	 while (true) {
        cout << "Enter the range of numbers and step (both should be positive): \n";
        cin >> num >> m;

        if (num < 0) {
            cout << "Please enter a positive number for range.\n";
        } else if (m <= 0) {
            cout << "Please enter a positive number for step.\n";
        } else {
            break; // Valid input, exit loop
        }
    }
	 for (i = 0; i <= num; i += m) {
        cout << i << endl;
    }


return 0;
}

