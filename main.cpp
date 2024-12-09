#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int size = 10;
    int *arr = new int[size];

    int count = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
        count += arr[i];
    }
    cout << endl;
    cout << "Sum of the array: " << count << endl;

    delete [] arr;
    return 0;
}