#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertAtStart(Node **node, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = (*node);
    (*node) = newNode;
}

void insertAfter(Node *node, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = node->next;
    node->next = newNode;
}

void insertAtEnd(Node **node, int data)
{
    Node *last = *node;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*node == NULL)
    {
        *node = newNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void printLinkedList(Node *node)
{
    if (node == NULL)
    {
        cout << "Linked List is empty." << endl;
        return;
    }
    while (node != NULL)
    {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL";
}

int main()
{
    Node *head = NULL;
    // printLinkedList(head);
    insertAtStart(&head, 5);
    insertAtEnd(&head, 6);
    insertAtEnd(&head, 8);
    printLinkedList(head);
    insertAfter(head->next, 7);
    printLinkedList(head);
    return 0;
}