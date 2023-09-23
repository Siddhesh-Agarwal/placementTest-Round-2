#include <iostream>
#include <vector>
using namespace std;

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

bool startsWithVowel(string s)
{
    return isVowel(s[0]);
}

void solve(vector<string> words, vector<vector<int>> queries)
{
    for (auto query : queries)
    {
        int l = query[0];
        int r = query[1];
        int count = 0;
        for (int i = l; i <= r; i++)
            if (startsWithVowel(words[i]))
                ;
        count++;
        cout << count << " ";
    }
}

int main()
{
    int n, q;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(2));
    for (int i = 0; i < q; i++)
        cin >> queries[i][0] >> queries[i][1];
    solve(words, queries);
}