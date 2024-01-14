#include <iostream>
using namespace std;


int sumOfDivisors(int n) {
int sum = 0;
  
for(int i = 1; i <= n/2; i++) {
  if(n % i == 0) {
    sum += i; 
  }
}
  
return sum + n; 
}

int main() {

int n;
cout << "Please Enter a number: ";
cin >> n;

int divisorSum = sumOfDivisors(n);
  
cout << "Sum of divisors of " << n << " is " << divisorSum << "\n";
  
system("pause");
return 0;
}