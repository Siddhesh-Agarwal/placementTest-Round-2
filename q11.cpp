#include <iostream>
#include <vector>
#include <map>
using namespace std;

void lower(string &word)
{
    for (char &ch : word)
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
}

bool meenaSolves(string word)
{
    lower(word);
    map<char, int> mp;
    for (char ch : word)
        mp[ch]++;
    for (auto i : mp)
        if (i.second > 1)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    for (auto word : words)
    {
        cout << (meenaSolves(word) ? "true" : "false") << "\n";
    }
}