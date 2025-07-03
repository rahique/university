#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE] = {10, 20, 30}; // custom pre-filled stack
int top = 2; // index of last element (30)

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << "Popped: " << stack[top] << endl;
        top--;
    }
}

int main() {
    pop(); // Popped: 30
    pop(); // Popped: 20
    pop(); // Popped: 10
    pop(); // Stack Underflow
    return 0;
}

