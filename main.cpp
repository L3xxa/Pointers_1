#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    char c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Enter an operator: ";
    cin >> c;

    int *pa = &a;
    int *pb = &b;
    char *pc = &c;

    if (*pc == '+') {
        cout << *pa << "+" << *pb << "=" << *pa + *pb << endl;
    }
    else if (*pc == '-') {
        cout << *pa << "-" << *pb << "=" << *pa - *pb << endl;
    }
    else if (*pc == '*') {
        cout << *pa << "*" << *pb << "=" << *pa * *pb << endl;
    }
    else if (*pc == '/') {
        cout << *pa << "/" << *pb << "=" << *pa / *pb << endl;
    }
    else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}