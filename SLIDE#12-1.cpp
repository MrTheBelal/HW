#include <iostream>
using namespace std;

int factorial(int n) {
  int fact = 1;
  for(int i=1; i<=n; i++) {
    fact *= i;
  }
  return fact;
}

int power(int base, int exp) {
  int result = 1; 
  for(int i=0; i<exp; i++) {
    result *= base;
  }
  return result;
}

int sinTaylor(int x, int n) {
  int sinx = 0;
  
  for(int i=0; i<n; i++) {
    sinx += power(-1, i) * power(x, 2*i+1) / factorial(2*i+1);
  }

  return sinx;
}

int cosTaylor(int x, int n) {
  int cosx = 0;
   
  for(int i=0; i<n; i++) {
    cosx += power(-1, i) * power(x, 2*i) / factorial(2*i);
  }

  return cosx;
}

int main() {  
  int x;
  cout << "Please Enter a number: ";
  cin >> x;

  int n = 10;
    
  int sinus = sinTaylor(x, n);
  int cosinus = cosTaylor(x, n);
  
  int tanx = sinus / cosinus; 

  cout << "tan(" << x <<") = " << tanx << "\n";
  
  system("pause");
  return 0;
}