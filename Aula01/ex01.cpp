#include <iostream>
#include <math.h>
using namespace std;
int main() {
    
  double a, b, c, delta, x1, x2;
  cout << "Digite o valor de a: ";
  cin >> a;
  cout << "Digite o valor de b: ";
  cin >> b;
  cout << "Digite o valor de c: ";
  cin >> c;
  delta = (b*b) - (4*a*c);
  if(delta > 0){
      x1 = (-b + sqrt(delta)) / (2*a);
      x2 = (-b - sqrt(delta)) / (2*a);
      cout << "X1: " << x1 << " X2: " << x2;
  }
  else if(delta < 0){
      cout << "Sem raiz";
  } else{
      x1 = (-b) / (2*a);
    cout << "delta = 0 e x1 = " << x1;
  }

  system("PAUSE");
  return EXIT_SUCCESS;
}