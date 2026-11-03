#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,L;
    cin >> n >> m >> L;

    int h[L] = {0};
    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
            h[A[i][j]]++;
        }
    }

    for (int i = 0; i < L; i ++) {
        cout << h[i];
        if (i != L-1) {
            cout << " ";
        }
    }

    return 0;
}