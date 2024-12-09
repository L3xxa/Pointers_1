#include <iostream>
using namespace std;

int main() {

    int a;
    int b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    if (a > b) {
        int *pb = &b;
        cout << a << " > " << *pb << endl;
    }
    else if (a < b) {
        int *pa = &a;
        cout << b << " > " << *pa << endl;
    }
    else {
        cout << a << " = " << b << endl;
    }

    return 0;
}