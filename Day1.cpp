#include <iostream>
using namespace std;
void sortArr(int arr[], int n)
{
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
    }
    int i = 0;
    while (count_0 > 0)
    {
        arr[i] = 0;
        i++;
        count_0--;
    }
    while (count_1 > 0)
    {
        arr[i] = 1;
        i++;
        count_1--;
    }
    while (count_2 > 0)
    {
        arr[i] = 2;
        i++;
        count_2--;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortArr(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}