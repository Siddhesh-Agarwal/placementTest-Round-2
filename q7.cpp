#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool flag = true;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[i - 1])
            flag = false;
    if (flag)
    {
        cout << "true";
        return 0;
    }
    flag = true;
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1])
            flag = false;
    if (flag)
    {
        cout << "true";
        return 0;
    }
    cout << "false";
    return 0;
}