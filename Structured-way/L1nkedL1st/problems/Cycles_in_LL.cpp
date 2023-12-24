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

// Make a cycle in a LinkedList -------------------
void makeCycleLL(node *&head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

// Detect cycle in a LinkedList -------------------
void detectCycleLL(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            cout << "Cycle present" << endl;
            return;
        }
    }
    cout << "No cycle present" << endl;
}

// Remove cycle in a LinkedList -------------------
void removeCycleLL(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

// ```` Driver Main Code ````````````````````````````
int main()
{
    node *head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 24);
    insertAtTail(head, 42);
    insertAtTail(head, 52);
    insertAtTail(head, 62);

    makeCycleLL(head, 3);
    detectCycleLL(head);
    removeCycleLL(head);
    detectCycleLL(head);
    display(head);

    return 0;
}