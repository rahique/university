#include <iostream>
using namespace std;

int main() {
    string sentence;
    char charToInsert;
    int position;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence); // This allows spaces in the sentence

    cout << "Enter the character to insert: ";
    cin >> charToInsert;

    cout << "Enter the position to insert the character (0-based index): ";
    cin >> position;

    // Check if position is valid
    if (position < 0 || position > sentence.length()) {
        cout << "Invalid position!" << endl;
        return 1; // Exit with error
    }

    // Insert the character by shifting other characters to the right
    sentence += ' '; // Temporarily increase the size of the string
    for (int i = sentence.length() - 2; i >= position; --i) {
        sentence[i + 1] = sentence[i]; // Shift characters
    }
    sentence[position] = charToInsert; // Insert the character

    cout << "Updated sentence: " << sentence << endl;

    return 0;
}

