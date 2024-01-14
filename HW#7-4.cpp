#include <iostream>
using namespace std;

int gcd(int n, int m) {
if(m == 0) 
  return n;
else
  return gcd(m, n % m);   
}

int main() {

int n, m;
cout << "Please Enter positive Number 1: ";
cin >> n ;
cout << "Please Enter positive Number 2: ";
cin >> m;

int result = gcd(n, m);

cout << "Greatest common divisor of " << n << " and " << m << " is " << result << "\n";
  
system("pause");
return 0;
}