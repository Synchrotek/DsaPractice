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

// Deletion Methods ------------------------------
void deleteAtHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *toDeleteNode = head;
    head = head->next;
    delete toDeleteNode;
}
void deleteAtTail(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *toDeleteNode = temp->next;
    temp->next = temp->next->next;
    delete toDeleteNode;
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

// ```````````````````````````````````````````````
// Reverse Methods Iterative ---------------------
node *reverse(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
    // head = prevPtr;
}

// Reverse Methods Recursive ----------------------
node *reverse_recursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

// Reverse K nodes in a Linked List ---------------
// Time Complexity = O(n)
node *reverse_k(node *&head, int k)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    int count = 0;
    while (currPtr != NULL && count < k)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reverse_k(nextPtr, k);
    }
    return prevPtr;
}

// ```` Driver Code ``````````````````````````````
int main()
{
    node *head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 24);
    insertAtTail(head, 42);
    insertAtTail(head, 52);
    insertAtTail(head, 62);

    display(head);
    // head = reverse(head);
    head = reverse_recursive(head);
    display(head);

    int k = 2;
    node *reversed_kNode = reverse_k(head, k);
    display(reversed_kNode);

    return 0;
}