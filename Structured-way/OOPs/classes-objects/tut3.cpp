#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter price of your item: ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id: "
             << itemId[i] << ": " << itemPrice[i] << endl;
    }
}

int main()
{
    int N;
    cout << "How many Item to be stored: ";
    cin >> N;
    Shop dukaan;
    dukaan.initCounter();
    while (N--)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();

    return 0;
}

/*
 Hi, I'm an IT student.
 Passionate about - ᴡᴇʙ ᴅᴇᴠ, ᴍʟ, ɪᴏᴛ.
 All my projects are available in the repository
 Fun fact - Like me Games are biggest motivation of many programmers
*/