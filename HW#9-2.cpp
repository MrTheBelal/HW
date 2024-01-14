#include <iostream>
using namespace std;

int main() {
int arr[10];
cout << "Enter 10 elements: ";
for(int i=0; i<10; i++) {
    cin >> arr[i];
}
  
int small = INT_MAX, secSmall = INT_MAX; 
  
for(int i=0; i<10; i++) {
    if(arr[i] < small) {
        secSmall = small;
        small = arr[i];
        }
    else if(arr[i] < secSmall && arr[i] != small) {
        secSmall = arr[i];
        }
}
  
cout << "\nSecond smallest number is: " << secSmall << "\n";

system("pause");
return 0;
}