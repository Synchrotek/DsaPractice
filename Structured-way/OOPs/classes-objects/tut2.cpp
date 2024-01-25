#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect bonary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else if (s.at(i) == '1')
            s.at(i) = '0';
    }
}

void binary ::display(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}

/* -------------------------------------------------------------------------
In this program we learned that nesting of member functions
are implemented in C++.
We created a class binary that have 4 functions in it
read - to take binary input into a string
chk_bin - to check if the input is valid
ones_complement - to generate 1's complement of binary string
display - to traverse the binary string
And we declare all these functions within the class but we defined these functions outside of th class with th help of "Scope resolution opratot (::)"

Here the neseting of member functions happens when the chk_bin() is called within another function ( ones_complement() )
and also even if the chk_bin is declared private it can still be accessed
within other functions. Thus nesting calling.
--------------------------------------------------------------------------- */