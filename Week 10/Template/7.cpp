//WAP to demonstrate multiple try and catch blocks
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter value: ";
    cin>>a;
    try
    {
        if(a>0)
            throw 5;
        else if(a<0)
            throw 'A';
        else
            throw;
    }
    catch(int x)
    {
        cout<<"Integer exception";
    }
    catch(float y)
    {
        cout<<"Float exception";
    }
    catch(char z)
    {
        cout<<"Character exception";
    }
    catch(...)
    {
        cout<<"Default";
    }
    return 0;
}