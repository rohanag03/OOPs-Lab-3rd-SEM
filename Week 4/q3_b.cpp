#include <iostream>
using namespace std;
void print_func(char ch='*', int n=80)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<ch;
    }
    
}
int main()
{
    int opt;
    cout<<"Choose the desired option:\n1.Give the character and no. of times you want to print it.\n2.Give only character.\n3.No value will be given."<<endl;
    cin>>opt;
    if(opt==1)
    {
        char c;
        int p;
        cout<<"Enter the character:"<<endl;
        cin>>c;
        cout<<"Enter the number of times:"<<endl;
        cin>>p;
        print_func(c,p);
    }
    else if (opt==2)
    {
        char c;
        cout<<"Enter the character:"<<endl;
        cin>>c;
        print_func(c);
    }
    else if (opt==3)
    {
        print_func();
    }
    else
    {
        cout<<"Invalid Option. Please try again.";
    }
}
