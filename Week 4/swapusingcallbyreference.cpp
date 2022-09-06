//WAP to swap two integers using pass by reference.
#include<iostream>
using namespace std;
void swap (int &num1, int &num2)
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
int main()
{
        int a,b;
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;

        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}