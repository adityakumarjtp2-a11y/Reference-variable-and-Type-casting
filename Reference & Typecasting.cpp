#include <iostream>
using namespace std;
    
    int c = 45;
int main() {
    int a , b , c;

   // /*Reference variable and Typecasting*/ //

   // cout << "Enter the value of a:" << endl;
   // cin >> a;

   // cout << "Enter the value of b:" << endl;
   // cin >> b;

   // c = a + b;
   // cout << "The sum is " << c << endl;



////// /*     Global variable and Local variale      */ //////

   //cout << "The value of a:" << endl;
   //cin >> a;

   //cout << "The value of b:" << endl;
   //cin >> b;

   //c = a + b;
   //cout << "The sum is" << c << endl;
   // cout << "The global  c is" << :: c << endl;


   //// /*    Long Long float and Long Double   */ ////
   //float d = 34.4f;
   //long double e = 34.4l;
 
   //cout << "The size of 34.4d is " << sizeof (34.4) << endl;

   //cout << "The size of 34.4f is " << sizeof (34.4f) << endl;
   //cout << "The size of 34.4l is " << sizeof (34.4l) << endl;
   //cout << "The size of 34.4F is " << sizeof (34.4F) << endl;
   //cout << "The size of 34.4L is " << sizeof (34.4L) << endl;


   // **************** Reference variable *****************//
   // Rohan das -----> Rohu -----> Dangerous Typecasting //
   //float x = 555;
   //float & y = x;
   //cout << x << endl;
   //cout << y << endl;


   //****** /*  Typecasting */ //*******/ */
   int x = 50;
   float y = 50.46;

   cout << "The value of x is " << (float)x << endl;
   cout << "The value of x is " << float (x) << endl;
   cout << "The value of y is " << (int)y << endl;
   cout << "The value of y is " << int (y) << endl;
   int z = int (y);
   cout << "The expression is " << x + y << endl;
   cout << "The expression is " << x + int (y) << endl;
   cout << "The expression is " << x + (int)y << endl;




    return 0;
}