#include <iostream>
#include <string>
using namespace std;

int main() {
    string original, toRemove, result = "";

    cout << "Enter the original string: ";
    getline(cin, original);

    cout << "Enter characters to remove: ";
    getline(cin, toRemove);

    for (char c : original) {
        // Check if character 'c' is *not* in toRemove string
        bool found = false;
        for (char r : toRemove) {
            if (c == r) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c;
        }
    }

    cout << "Filtered string: " << result << endl;

    return 0;
}

