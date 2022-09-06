//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.
#include <iostream>
using namespace std;
int volume(int,int, int);
float volume(float);
float volume(float,float);

int main()
{
    int l, b, h;
    float r, r2, h2;

    cout<<"Enter length and breadth and height of cuboid:";
    cin>>l>>b>>h;

    cout<<"Enter radius of sphere:";
    cin>>r;

    cout<<"Enter base radius and height of cylinder:";
    cin>>r2>>h2;

    cout<<"\nVolume of cuboid is "<< volume(l,b,h);
    cout<<"\nVolume of sphere is "<< volume(r);
    cout<<"\nVolume of cylinder is "<< volume(r2, h2);
}

int volume(int l,int b, int h)
{
    return(l*b*h);
}
float volume(float r)
{
    return((4*3.14*r*r*r)/3);
}
float volume(float r2, float h2)
{
    return(3.14*r2*r2*h2);
}