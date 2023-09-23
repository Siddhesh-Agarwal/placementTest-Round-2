#include <iostream>
#include <vector>
using namespace std;

int minOperationsToZero(vector<int> arr, int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min && arr[i] != 0)
            min = arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int x = arr[i] / min;
            count += x;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minOperationsToZero(arr, n);
}