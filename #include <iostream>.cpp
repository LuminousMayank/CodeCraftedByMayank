#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter the size of the frame
    cout << "Enter the size of the frame: ";
    cin >> n;

    // Loop to print the frame of stars
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print stars for the borders and spaces for the inside
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  // Move to the next line after printing each row
    }

    return 0;  // Indicate that the program ended successfully
}
