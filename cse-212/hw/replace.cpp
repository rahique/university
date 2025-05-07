#include <iostream>
using namespace std;

int main() {
    string sentence;
    char toReplace, replaceWith;

    // Taking user input
    cout << "Enter a sentence: ";
    getline(cin, sentence); // This allows spaces in the sentence

    cout << "Enter the character to replace: ";
    cin >> toReplace;

    cout << "Enter the character to replace with: ";
    cin >> replaceWith;

    // Loop through each character in the string
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == toReplace) {
            sentence[i] = replaceWith; // Replace the character
        }
    }

    cout << "Updated sentence: " << sentence << endl;

    return 0;
}

