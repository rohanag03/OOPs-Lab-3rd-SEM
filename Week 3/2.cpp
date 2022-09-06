#include <iostream>
using namespace std;
class meter;
class inch
{
    float total;
    void getdata()
    {
        cout<<"Enter the distance in feet and inches: "<< endl;
        cin>>feet;
        cin>>inches;
        total=(feet*12)+inches;
        total=total*2.54;
    }
    friend void calc(meter,inch);
};
class meter
{
    float met, cent;
    public:
    float total;
    void getdata()
    {
        cou<<"Enter the distance in meter and centimeter: "<< endl;
        cin>> met;
        cin>>cent;
        total=met*100+cent;
    }
};
void calc(meter m, inch i)
{
    if(m.total>i.total)
    {
        cout<<"The longer of distance is"<<m.met<<"Meter and"<<m.cent<<"centimenters."<<endl;
    }
    else
    {
        cout
    }
}
