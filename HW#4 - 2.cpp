#include <iostream>
using namespace std;

main() {
    int x,y,z,sum1,sum2;
    float sum;
    cout << "Please Enter x: ";
    cin >> x ;
    cout << "Please Enter y: ";
    cin >> y ;
    cout << "Please Enter Z: ";
    cin >> z ;
    sum1 = (x-y) * (x+z);
    sum2 =((x+y+z)*(x+y+z)) + 1;
    sum = (float) sum1 / sum2;
    cout << "the output is: " << sum << "\n";
    system("pause");
}