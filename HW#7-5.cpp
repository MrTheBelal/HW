#include <iostream>
using namespace std;

bool isPrime(int num) {
if(num <= 1) 
  return false;
  
for(int i = 2; i*i <= num; i++) {
  if(num % i == 0)
    return false;
}

return true;
}

int sumPrimes(int n) {
int sum = 0;
for(int i = 2; i < n; i++) {
  if(isPrime(i))
    sum += i;
}
return sum; 
}


int main() {
  
int n;
cout << "Please Enter number: ";
cin >> n;
  
int primesSum = sumPrimes(n);

cout << "Sum of primes smaller than " << n << " is " << primesSum << "\n";

system("pause");    
return 0; 
}