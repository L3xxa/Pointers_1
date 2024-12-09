#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "a = " << a << " and b = " << b << endl;

    int *pa = &b;
    int *pb = &a;

    cout << "a = " << *pa << " and b = " << *pb << endl;

    return 0;
}