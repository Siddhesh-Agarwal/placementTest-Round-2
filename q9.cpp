#include <iostream>
using namespace std;

int main()
{
    string s, g;
    cin >> s >> g;
    if (s.size() != g.size())
    {
        cout << "false";
        return 0;
    }
    s += s;
    int index = s.find(g);
    cout << ((0 <= index && index < g.size()) ? "true" : "false");
}