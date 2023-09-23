#include <iostream>
#include <vector>
using namespace std;

// all solutions of n queens
void nQueens(int n, vector<int> &cols, vector<vector<string>> &res) {
    if (cols.size() == n) {
        vector<string> sol;
        for (int i = 0; i < n; i++) {
            string s(n, '.');
            s[cols[i]] = 'Q';
            sol.push_back(s);
        }
        res.push_back(sol);
    }
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < cols.size(); j++) {
            if (cols[j] == i || cols.size() - j == abs(i - cols[j])) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cols.push_back(i);
            nQueens(n, cols, res);
            cols.pop_back();
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> res;
    vector<int> cols;
    nQueens(n, cols, res);
    return res;
}

int main() {
    int n;
    cin >> n;
    if(n <= 0) {
        cout << "n should be positive" << endl;
        return 0;
    }
    if(n == 2 || n == 3) {
        cout << "No solution" << endl;
        return 0;
    }
    vector<vector<string>> res = solveNQueens(n);
    for (auto &v : res) {
        for (auto &s : v) {
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}
