#include <bits/stdc++.h>
using namespace std;
// Node template [data | next]
struct Node
{
    double data;
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
    // Traversing the linked list after update
    cout << "Abailavle Values" << endl;
    Node *head = first;
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
    // Searching and update
    int search;
    cout << "Enter the value to give 5% : ";
    cin >> search;
    Node *current = first;
    while (current != nullptr)
    {
        if (current->data == search)
        {
            current->data += (current->data * (5.00 / 100));
            break;
        }
        current = current->next;
    }

    if (current == nullptr)
    {
        cout << "Not Found" << endl;
    }
    // Traversing the linked list after update
    Node *temp = first;
    while (temp != nullptr)
    {
        cout << "Updated : " << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}