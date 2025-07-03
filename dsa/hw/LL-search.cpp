#include <bits/stdc++.h>
using namespace std;
// Node template [data | next]
struct Node
{
    int data;
    Node *next;
};
int main()
{
    // Nodes or boxes
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *forth = new Node;
    Node *fifth = new Node;
    // Setting Data value
    first->data = 10;
    second->data = 20;
    third->data = 30;
    forth->data = 40;
    fifth->data = 50;
    // Linking the nodes
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = nullptr;
    // Traversing the linked list
    Node *head = first;
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
    // Searching the linked list
    int search = 10;
    Node *current = first;
    while (current != nullptr)
    {
        if (current->data == search)
        {
            cout << "Found : " << current->data << endl;
            break;
        }
        current = current->next;
    }

    if (current == nullptr)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
