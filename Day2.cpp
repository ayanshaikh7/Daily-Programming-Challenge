#include <iostream>
using namespace std;

int findMissingNo(int arr[], int n)
{
    n = n + 1;
    int sumNnatural = n * (n + 1) / 2;
    int sumOfArray = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sumOfArray += arr[i];
    }
    return sumNnatural - sumOfArray;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findMissingNo(arr, n);
    cout << result << endl;
    return 0;
}