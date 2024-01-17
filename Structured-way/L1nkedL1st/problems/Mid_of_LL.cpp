// Middle of Linked List
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Find middle of the LinkedList ------------------
node *middleNode(node *&head)
{
    node *fastPtr = head;
    node *slowPtr = head;
    while (fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr;
}

// Insertion Methods ------------------------------
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
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
    int N; // Size of LinkedList
    cin >> N;
    int vals = 0;
    while (N--)
    {
        cin >> vals;
        insertAtTail(head, vals);
    }
    display(head);

    cout << middleNode(head)->data << endl;

    return 0;
}