#include <iostream>
using namespace std;

int main() {  
int arr[10];
  
cout<<"Please Enter 9 integers: ";
for(int i=0;i<9;i++) {
    cin >> arr[i];
}

for(int i=0;i<8;i++) {   
    for(int j=i+1;j<9;j++) {  
        if(arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
    }
}
  
cout << "Sorted Array: \n";
for(int i=0;i<9;i++) {
    cout << arr[i] <<" "; 
}
  
int num;
cout << "\nPlease Enter the 10th number: \n";
cin >> num;
  
int index = 0;
while(index<9 && num>arr[index]) {
    index++; 
}
  
for(int i=8;i>=index;i--) {
    arr[i+1] = arr[i];
}
  
arr[index] = num;
  
cout << "Final Array: \n";
for(int i=0;i<10;i++) {
    cout<<arr[i]<<" ";
}

cout << "\n";
system("pause");
return 0; 
}