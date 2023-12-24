// Appraoch: LIFO
//    (Last In First Out)
// Time complexites :
//   - Access: O(N)
//   - Search: O(N)
//   - Insertion: O(1)
//   - Deletion: O(1)

#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    stack st;
    int N = 1, val = 0;
    cin >> N; // Size of stack
    for (int i = 0; i < N; i++)
    {
        cin >> val;
        st.push(val);
    }

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.isEmpty() << endl;

    return 0;
}