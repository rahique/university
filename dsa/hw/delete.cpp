#include <iostream>
using namespace std;

int main() {
    string sentence;
    int position;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence); // This allows spaces in the sentence

    cout << "Enter the position to delete the character (0-based index): ";
    cin >> position;

    // Check if position is valid
    if (position < 0 || position >= sentence.length()) {
        cout << "Invalid position!" << endl;
        return 1; // Exit with error
    }

    // Shift characters to the left to delete the character at the given position
    for (int i = position; i < sentence.length() - 1; ++i) {
        sentence[i] = sentence[i + 1]; // Shift each character left
    }

    sentence.pop_back(); // Remove the last character since it's now duplicated

    cout << "Updated sentence: " << sentence << endl;

    return 0;
}

