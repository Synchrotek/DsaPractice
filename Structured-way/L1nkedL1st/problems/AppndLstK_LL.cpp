// Append Last K nodes of a Linkded list
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

// Length of LinkedList ----------------------------
int length(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// ```````````````````````````````````````````````
// Append Last K nodes of a Linkded list ---------------------
// Time Complexity = O(n)
node *AppendLstK(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int l = length(head);
    int count = 1;
    k = k % l;

    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

// ```` Driver Code ``````````````````````````````
int main()
{
    node *head = NULL;
    int len = 0, k = 0;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
        cin >> arr[i];
    cin >> k;
    for (int i = 0; i < len; i++)
        insertAtTail(head, arr[i]);

    display(head);

    node *newHead = AppendLstK(head, k);
    display(newHead);

    return 0;
}