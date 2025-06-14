#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct GroceryItem {
    string name;
    int quantity;
};

int main() {
    vector<GroceryItem> groceries;
    int choice;

    while (true) {
        cout << "\n=== Grocery CRUD Application ===\n";
        cout << "1. Add Grocery Item (Create)\n";
        cout << "2. View Grocery List (Read)\n";
        cout << "3. Update Item (Update)\n";
        cout << "4. Delete Item (Delete)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // clear input buffer

        switch (choice) {
            case 1: {
                GroceryItem item;
                cout << "Enter item name: ";
                getline(cin, item.name);
                cout << "Enter quantity: ";
                cin >> item.quantity;
                groceries.push_back(item);
                cout << "Item added successfully!\n";
                break;
            }

            case 2: {
                cout << "\nYour Grocery List:\n";
                if (groceries.empty()) {
                    cout << "List is empty.\n";
                } else {
                    for (size_t i = 0; i < groceries.size(); ++i) {
                        cout << i + 1 << ". " << groceries[i].name
                             << " - Qty: " << groceries[i].quantity << endl;
                    }
                }
                break;
            }

            case 3: {
                if (groceries.empty()) {
                    cout << "List is empty. Nothing to update.\n";
                    break;
                }
                int index;
                cout << "Enter the item number to update: ";
                cin >> index;
                if (index < 1 || index > groceries.size()) {
                    cout << "Invalid index.\n";
                } else {
                    cin.ignore();
                    cout << "Enter new name: ";
                    getline(cin, groceries[index - 1].name);
                    cout << "Enter new quantity: ";
                    cin >> groceries[index - 1].quantity;
                    cout << "Item updated successfully.\n";
                }
                break;
            }

            case 4: {
                if (groceries.empty()) {
                    cout << "List is empty. Nothing to delete.\n";
                    break;
                }
                int index;
                cout << "Enter the item number to delete: ";
                cin >> index;
                if (index < 1 || index > groceries.size()) {
                    cout << "Invalid index.\n";
                } else {
                    groceries.erase(groceries.begin() + (index - 1));
                    cout << "Item deleted successfully.\n";
                }
                break;
            }

            case 5:
                cout << "Exiting the program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
