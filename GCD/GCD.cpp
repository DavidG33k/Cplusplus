#include <iostream>
using namespace std;

int main () {
    int n1, n2, ind, GCD;

    cout << "Insert first number: ";
    cin >> n1;
    cout  << "Insert second number: ";
    cin >> n2;

    if(n1>=n2)
        ind=n1;
    else
        ind=n2;

    for(unsigned i=1;i<=ind;i++)
        if(n1%i==0 and n2%i==0)
            GCD=i;

    cout << "The greatest common divisor is: " << GCD << "." << endl;

return 0;
}