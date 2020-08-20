#include <iostream>
using namespace std;

 int main() {
   float radius, area_circle;

   cout << "Enter the radius of circle: ";
   cin >> radius;

   area_circle = 3.14 * radius * radius;
   cout << "Area of circle: " << area_circle << endl;

     float l,b, area_rec;

   cout << "Enter the length and breadth of rectangle: ";
   cin >> l>>b;

   area_rec = l*b;
   cout << "Area of rectangle: " << area_rec << endl;

   float s, area_squ;

   cout << "Enter the side of square: ";
   cin >> s;

   area_squ = s*s;
   cout << "Area of square: " << area_squ << endl;

   return 0;
 }
