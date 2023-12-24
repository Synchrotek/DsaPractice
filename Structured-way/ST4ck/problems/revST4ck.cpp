#include <iostream>
#include <stack>
using namespace std;

// Insert at bottom of Stack -----------------------
void inserterAtBottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int topEle = st.top();
    st.pop();
    inserterAtBottom(st, ele);
    st.push(topEle);
}

// Reverse the stack (Without copying) -------------
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    inserterAtBottom(st, ele);
}

// Reverse words of a sentence using Stack ---------
void reverseSentense(string sentence)
{
    stack<string> st;
    for (int i = 0; i < sentence.length(); i++)
    {
        string word = "";
        while (sentence[i] != ' ' && i < sentence.length())
        {
            word += sentence[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

// Traversal Method ---------------------------------
void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

// ```` Driver Main Code ````````````````````````````
int main()
{
    int N, vals;
    cin >> N;
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        cin >> vals;
        st.push(vals);
    }

    cout << "Normal: ";
    display(st);
    reverse(st);
    cout << "Reverse: ";
    display(st);

    string sentence = "Best is C++";
    getline(cin >> ws, sentence);
    reverseSentense(sentence);

    return 0;
}

/* -------------------------
INPUT:
4
1 2 4 5
Life in Opportunities

OUPUT:
Normal: 5 4 2 1
Reverse: 1 2 4 5
Opportunities in Life
---------------------------- */