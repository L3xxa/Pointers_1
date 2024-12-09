#include <iostream>
using namespace std;

int main() {

    int size = 10;
    int arr_1[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p_1 = arr_1;

    cout << "-------------> Before <-------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr_1[i] << " ";
    }
    cout << endl;

    cout << "-------------> After <-------------" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << arr_1[i] << " ";
    }

    return 0;
}