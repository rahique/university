#include <iostream>
#include <cctype>
using namespace std;

#define SIZE 100
int stack[SIZE];
int top = -1;

void push(int val) {
    if (top >= SIZE - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = val;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return stack[top--];
}

int evaluatePostfix(string expr) {
    expr += ')';

    for (char ch : expr) {
        if (isdigit(ch)) {
            push(ch - '0'); 
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
           
            int A = pop();
            int B = pop();
            switch (ch) {
                case '+': push(B + A); break;
                case '-': push(B - A); break;
                case '*': push(B * A); break;
                case '/': push(B / A); break;
            }
        } else if (ch == ')') {
            break; 
        }
    }
    return pop();
}

int main() {
    string postfix = "53+82-*";  // (5 + 3) * (8 - 2) = 48
    int value = evaluatePostfix(postfix);
    cout << "Value = " << value << endl;
    return 0;
}

