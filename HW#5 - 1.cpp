#include <iostream>
using namespace std;

main() {
    float money;
    int tax;
    cout << "Please enter your income money: ";
    cin >> money;
    if (money<6){
        tax= 0;
    }
    else if (money>=6 && money<8) {
        tax= 5;
    }
    else if (money>=8 && money<10) {
        tax= 10;
    }
    else if (money>=10 && money<14) {
        tax= 15;
    }
    else if (money>=14 && money<18) {
        tax= 20;
    }
    else if (money>=18 && money<25) {
        tax= 25;
    }
    else {
        tax= 35;
    }
    money=money - ((money*tax)/100);
    cout << "Your income after tax is equal to: " << money << "\n" ;
    system("pause");
}