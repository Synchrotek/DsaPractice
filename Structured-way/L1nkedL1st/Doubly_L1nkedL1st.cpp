#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Insertion Methods ------------------------------
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

// Deletion Methods -------------------------------
void deleteAtHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *toDeleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete toDeleteNode;
}
void deletionByPos(node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos == 1 || head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

// Traversal Method -------------------------------
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ```` Driver Main Code ````````````````````````````
int main()
{
    node *head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 24);
    insertAtTail(head, 42);
    display(head);

    insertAtHead(head, 16);
    insertAtHead(head, 6);
    display(head);

    deletionByPos(head, 2);
    deletionByPos(head, 3);
    display(head);

    return 0;
}