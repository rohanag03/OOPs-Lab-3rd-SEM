//WAP to increment the value of an argument given to function
#include <iostream>
using namespace std;
void fun(int x, int y, int z)
{
    cout << x <<" "<< y <<" "<< z;
}
int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    fun(++i, ++i, ++i);
    return 0;
}