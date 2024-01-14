#include <iostream>
using namespace std;

int main() {

int arr1[5], arr2[5];
  
cout << "Please Enter 5 elements for first array: ";
    for(int i=0; i<5; i++) {
        cin >> arr1[i]; 
    }

cout << "Please Enter 5 elements for second array: "; 
    for(int i=0; i<5; i++) {
        cin >> arr2[i];
    }
  
cout << "Arrays before swapping: " << "\n";
cout << "First Array: ";
    for(int i=0; i<5; i++) {
        cout << arr1[i] << " "; 
    }
  
cout << "\nSecond Array: ";
    for(int i=0; i<5; i++) {
        cout << arr2[i] << " ";
    }
  
    for(int i=0; i<5; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
  
cout << "\n\nArrays after swapping: " << "\n";
cout << "First Array: ";
    for(int i=0; i<5; i++) {
        cout << arr1[i] << " ";  
    }
  
cout << "\nSecond Array: ";
    for(int i=0; i<5; i++) {
        cout << arr2[i] << " ";
    }

cout << "\n";

system("pause");
return 0;
}