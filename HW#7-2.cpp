#include <iostream>
using namespace std;

int taghsim(int num1, int num2) {
int sum = 0;
while (num1 >= num2) {
  num1 -= num2;
  sum++; 
}
return sum;
}

int baghi(int num1, int num2) {
int quotient = taghsim(num1, num2);
int sum = num1 - (quotient * num2);
return sum;  
}

int main() {

int num1, num2;
cout << "Please Enter number 1: ";
cin >> num1 ;
cout << "please Enter number 2: ";
cin >> num2 ;
  
cout << num1 << " / " << num2 << " = " << taghsim(num1, num2) << "\n";
cout << num1 << " % " << num2 << " = " << baghi(num1, num2) << "\n";

system("pause");
return 0;
}