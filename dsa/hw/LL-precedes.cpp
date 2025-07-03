#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;

    // before New node added;
    first->data = 20;
    second->data = 30;
    third->data = 40;

    first->next = second;
    second->next = third;
    third->next = NULL;

    Node *temp = first;
    cout << "Before Insertion" << endl;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    cout << "After Insertion" << endl;
    Node *newNode = new Node;
    newNode->data = 10;

    newNode->next = first;

    Node *newTemp = newNode;
    while (newTemp != nullptr)
    {
        cout << newTemp->data << endl;
        newTemp = newTemp->next;
    }
}
