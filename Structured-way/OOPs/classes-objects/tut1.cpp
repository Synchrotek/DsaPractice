#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
        cout << "Value of d: " << d << endl;
        cout << "Value of e: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1, b = b1, c = c1;
}

int main()
{
    Employee e1;
    e1.setData(1, 2, 4);
    e1.d = 6;
    e1.e = 8;
    e1.getData();

    return 0;
}