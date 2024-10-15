#include <iostream>
#include <iomanip>
#include <cstdlib> // для rand

using namespace std;

void createArrayRec(int* arr, int n) {
    if (n <= 0) return;
    createArrayRec(arr, n - 1);
    arr[n - 1] = rand() % 100;
}

void printArrayRec(const int* arr, int n, int index = 0) {
    if (index == n) {
        cout << endl;
        return;
    }
    cout << setw(4) << arr[index];
    printArrayRec(arr, n, index + 1);
}

void reverseArrayRec(int* arr, int start, int end) {
    if (start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArrayRec(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    createArrayRec(arr, n);
    cout << "Initial array: ";
    printArrayRec(arr, n);

    reverseArrayRec(arr, 0, n - 1);
    cout << "The array is in reverse order: ";
    printArrayRec(arr, n);

    delete[] arr;
    return 0;
}