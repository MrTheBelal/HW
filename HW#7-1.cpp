#include <iostream>
using namespace std;

main() {
int m,n;
cout << "Please Enter number M  : ";
cin >> m ;
cout << "Pleave Enter number N : ";
cin >> n ;
int sum = 1;
for (int i=0 ; i<n ; i++){
    sum = sum*m;
}
cout << sum << "\n" ;

system("pause");
}