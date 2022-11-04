/*Create a class which stores time in hh:mm format. Include all the constructors. The parameterized constructor should initialize the minute value
to zero, if it is not provided.*/
#include<iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
public:
    Time()      // default
    {
       hours = 0;
       minutes = 0;
    }
    Time(int h, int m)       // parameterized
    {
        hours = h;
        minutes = m;
    }
    void display()
    {
        cout<<"TIME:  ";
        cout << hours << ":" << minutes << endl;
    }
};
int main() 
{
Time time1(20, );
Time time2(10, 30);

time1.display();
time2.display();
return 0;
}