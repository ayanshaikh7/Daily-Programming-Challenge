#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n) {
    int arr3[m + n];
    for (int i = 0; i < m; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n; i++) {
        arr3[m + i] = arr2[i];
    }
    sort(arr3, arr3 + m + n);
    for (int i = 0; i < m; i++) {
        arr1[i] = arr3[i];
    }
    for (int i = 0; i < n; i++) {
        arr2[i] = arr3[m + i];
    }
    cout << "arr1: ";
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "arr2: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    merge(arr1, arr2, m, n);
    return 0;
}