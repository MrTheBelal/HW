#include <iostream>
using namespace std;

int power(int base, int exp){
    int result = 1;
    for(int i=0; i<exp; i++){
        result *= base;
    }
    return result;
}

int calculate(int x, int y){

    int result = power(x,y);
    return result; 
}

int main() {
    int x, y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
  
    int result = calculate(x,y);
    cout<<"Result = "<<result<<"\n";

system("pause");
return 0;
}