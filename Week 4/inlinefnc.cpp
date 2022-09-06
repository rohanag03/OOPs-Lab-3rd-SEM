//WAP to find square and cube of a number using inline function.
#include <iostream>
using namespace std;
class power
{
public:
    inline int square(int n)
    {
        return n*n;
    }
    inline int cube(int n)
    {
        return n*n*n;
    }
};
int main()
{
    int n,r;
    power p;
    cout<<"\n Enter the number: ";
    cin>>n;
    r=p.square(n);
    cout<<"\n Square of "<< n << " is " << r <<endl;
    r=p.cube(n);
    cout<<"\n Cube of "<< n <<" is " << r <<endl;
    return 0;
}