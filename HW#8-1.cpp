#include <iostream>  
using namespace std;

int main() {
int arr[10];
    
int min = arr[0], max = arr[0]; 
  
cout << "Please Enter 10 integers: ";
for(int i = 0; i<10; i++) {
    cin >> arr[i];
    
    if(arr[i] < min) {
        min = arr[i]; 
        }
    
    if(arr[i] > max) {
        max = arr[i];
        }
    }
   
int avg = (min + max) / 2;
   
cout << "Average of minimum and maximum is: " << avg << "\n";

system("pause");
return 0;  
}