// given integer array find subarray with largest sum
#include <iostream>
#include <vector>
using namespace std;

int maxSumOfSubArray(vector<int> arr, int n)
{
    int maxSum = 0, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxSumOfSubArray(arr, n);
}