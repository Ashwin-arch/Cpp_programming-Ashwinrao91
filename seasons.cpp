#include <iostream>
using namespace std;

int main() {
    int season;
    bool valid = false;

    do {
        cout << "Enter a number (1-4) for the season: ";
        cin >> season;

        switch (season) {
            case 1:
                cout << "Spring\n";
                valid = true;
                break;
            case 2:
                cout << "Summer\n";
                valid = true;
                break;
            case 3:
                cout << "Autumn\n";
                valid = true;
                break;
            case 4:
                cout << "Winter\n";
                valid = true;
                break;
            default:
                cout << "Invalid input. Please try again.\n";
                // valid remains false, so loop continues
        }
    } while (!valid);

    return 0;
}

