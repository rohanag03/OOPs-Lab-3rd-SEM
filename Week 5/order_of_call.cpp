//WAP to demonstrate the order of call of constructors and destructors for a class.
#include <iostream>
using namespace std;
class Test {
    public:
        static int num;
        int value;
        Test(){
            num++;
            cout << "Create. " << num << endl;
            value = num;
        }
        ~Test(){
            cout << "Dead. " << value << endl;
        }
        void display(){
            // Silence is golden
        }
};

int Test::num = 0;

int main(){
    Test a, b, c, d;
    return 0;
}