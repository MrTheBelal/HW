#include <iostream>
using namespace std;

main() {
    float num1 , num2 , sum ;
    int method ;
    char op;
    cout << "please say your methos to calculate  (1 or 2): " ;
    cin >> method ;
    if (method==1) {
        cout << "please enter number 1: " ;
        cin >> num1 ;
        cout << "please enter number 2: " ;
        cin >> num2 ;
        sum = num1 + num2 ;
        cout << "output for (+) is : " << sum << "\n";
        sum = num1 - num2 ;
        cout << "output for (-) is : " << sum << "\n";
        sum = num1 * num2 ;
        cout << "output for (*) is : " << sum << "\n";
        sum =(int) num1 % (int) num2 ;
        cout << "output for (%) is : " << sum << "\n";
    }
    else if (method==2){
        cout << "please enter number 1: " ;
        cin >> num1 ;
        cout << "please enter number 2: " ;
        cin >> num2 ;
        cout << "please enter operator (-,+,*,%): " ;
        cin >> op ;
        switch (op) {
        case '+':
            sum = num1 + num2;
            break;
        case '-':
            sum = num1 - num2;
            break;
        case '*':
            sum = num1 * num2;
            break;
        case '%':
            sum =(int) num1 % (int) num2;
            break;
        default:
            cout << "ERROR - there is no operator called : " << op << "\n" ;
            break;
        }
        cout << "output for (" << op << ") is : " << sum << "\n";
    }
    else {
        cout << "you'r method is not registered on this program! \n" ;
    }
    system("pause") ;
}
