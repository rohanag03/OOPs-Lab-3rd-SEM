// Wap to swap private data member of two classes (the classes have no relation with each other)
#include <iostream>
using namespace std;
class abc;
class bcd
{
    int value1;

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << "\n";
    }
    friend void swap(bcd &, abc &);
};
class abc
{
    int value2;

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << "\n";
    }
    friend void swap(bcd &, abc &);
};
void swap(bcd &x, abc &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    bcd C1;
    abc C2;
    C1.indata(100);
    C2.indata(200);
    cout << "Values before exchange" << "\n";
    C1.display();
    C2.display();
    swap(C1, C2);
    cout << "Values after exchange" << "\n";
    C1.display();
    C2.display();
    return 0;
}