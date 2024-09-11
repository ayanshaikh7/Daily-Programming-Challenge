#include <iostream>
using namespace std;

int FindDuplicate(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        count = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] == i)
            {
                count++;
                if (count == 2)
                {
                    return arr[k];
                }
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3, 1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = FindDuplicate(arr, n);
    cout << result << endl;
    return 0;
}