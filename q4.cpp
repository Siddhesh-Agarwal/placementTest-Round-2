#include <iostream>
#include <vector>
#include <map>
using namespace std;

void printDuplicates(vector<int> arr)
{
    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.find(arr[i]) != mp.end())
            cout << arr[i] << " ";
        else
            mp[arr[i]]++;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    printDuplicates(arr);
}