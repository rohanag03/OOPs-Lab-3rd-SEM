/*Create two classes which stores distance in feet, inches and meter, cen-
timeter format respectively. Write a function which compares distance in object
of these classes and displays the larger one.*/
#include<iostream>
using namespace std;
class d1;
class d2
{
 float meters,centimeters;
 public:
 d2(float m, float c){
 	meters = m;
 	centimeters  = c;
 }
 friend void compares(d2 & x,d1 &y);
};
class d1
{
 float inch;
 float feet;
 public:
 	d1(float i, float f){
 		inch = i;
 		feet = f;
	 }
friend void compares(d2 & ,d1 & );
};
void compares(d2 &a,d1 &b)
{
	if((b.feet * 0.0254) < a.meters  ){
		cout<<"Distance in meters and centimers is larger\n";
	}
	else{
		cout<<"Distance in inches and feet is larger\n";
	}	
}
int main()
{
 d2 a(20,30);
 d1 b(100,60);
compares(a,b);
}