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
    cout << "Enter Id of your item: " << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item " << itemId[counter]
             << " is " << itemPrice[counter] << endl;
    }
}

int main()
{

    return 0;
}