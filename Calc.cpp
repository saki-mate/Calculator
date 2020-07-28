#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double x, y;
  
  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;

  cout << "x + y = " << x+y << endl;
  cout << "x - y = " << x-y << endl;
  cout << "x * y = " << x*y << endl;
  cout << "x / y = " << x/y << endl;

  
  cout << "sin(x) = " << sin(x * M_PI /180.0) << endl;
  cout << "cos(x) = " << cos(x * M_PI /180.0) << endl;
  
return 0;
}
