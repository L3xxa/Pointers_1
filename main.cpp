#include <iostream>
using namespace std;

int main() {

    int size = 10;
    int arr_1[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_2[size];

    int *p_1 = arr_1;
    int *p_2 = arr_2;

    cout << "Array 1: ";
    for (int i = 0; i < size; i++) {
        cout << arr_1[i] << " ";
    }
    cout << endl;
    cout << "         | | | | | | | | | |" << endl;
    cout << "         | | | | | | | | | |" << endl;
    cout << "         V V V V V V V V V V" << endl;

    for (int i = 0; i < size; i++) {
        *p_2 = *p_1;
        p_1++;
        p_2++;
    }

cout << "Array 2: ";
    for (int i = 0; i < size; i++) {
        cout << arr_2[i] << " ";
    }

    return 0;
}