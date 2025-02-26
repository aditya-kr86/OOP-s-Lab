// Write a C++ Program to Check Whether a Character is Vowel or Consonant
#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a Character: ";
    cin >> c;

    if (!isalpha(c)) {
        cout << "Invalid input! Please enter an alphabet." << endl;
    } 
    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
             c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "Entered Character is a Vowel" << endl;
    } else {
        cout << "Entered Character is a Consonant" << endl;
    }

    return 0;
}
