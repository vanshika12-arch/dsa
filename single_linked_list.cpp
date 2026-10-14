
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

// Insertion at beginning
void insertBeginning(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insertion at end
void insertEnd(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insertion at a specific position (1-based)
void insertPosition(int value, int pos)
{
    if (pos < 1)
    {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1)
    {
        insertBeginning(value);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Display linked list
void display()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    cout << "Original list: ";
    display();

    insertBeginning(5);
    cout << "After insertion at beginning: ";
    display();

    insertEnd(40);
    cout << "After insertion at end: ";
    display();

    insertPosition(25, 4);
    cout << "After insertion at position 4: ";
    display();

    return 0;
}
