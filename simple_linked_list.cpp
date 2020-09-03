#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void traverse(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    traverse(first);

    return 0;
}