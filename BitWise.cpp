#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c = 0;
    cout<<"Enter a and b : ";
    cin>>a>>b;       

    c = a & b;
    cout << "AND(&) OPERATOR : "<<endl << a <<" AND "<< b <<" = "<< c << endl << endl ;

    c = a | b;
    cout << "OR (|) OPERATOR : "<<endl << a <<" OR "<< b <<" = "<< c << endl << endl ;

    c = a ^ b;
    cout << "XOR(^) OPERATOR : "<<endl << a <<" XOR "<< b <<" = "<< c << endl << endl;

    c = !a;
    cout << "NOT(!) OPERATOR : "<<endl << a <<" NOT " << " = " << c << endl << endl;

    return 0;
}
