#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,p,q;
    cin >> n >> m >> p >> q;

    int a[n][m];
    vector<vector<int>> b;
    b.resize(p);
    for (int i = 0; i < p; i ++) {
        b[i].resize(q);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        } 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = i * m +j;
            int new_i = temp / q;
            int new_j = temp % q;
            b[new_i][new_j] = a[i][j];
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}