#include<iostream>
using namespace std;

template<typename T, typename U>
void display_different_types(T one, U two){
    cout<<"first argument is: "<<one<<endl<<"second argument is: "<<two<<endl;
}


int main()
{
    display_different_types<int, float>(1, 2.687);
    display_different_types<float, string>(3.98, "string");
    return 0;
};