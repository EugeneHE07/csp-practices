#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> px(n), py(n);

    map<int,map<int,bool>> A;

    for (int i = 0; i < n; i++) {
    cin >> px[i] >> py[i];
        A[px[i]][py[i]] = true;
    }

    vector<int> ans(5, 0);

    int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
    int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

    for (int i = 0; i < n; i++) {
        int cnt1 = 0;
        int cnt2 = 0;

        for (int j = 0; j < 8; j++) {
            int x = px[i] + dx[j];
            int y = py[i] + dy[j];

            if (A.count(x) && A[x].count(y)) {
                if (j < 4) {
                    cnt1++;
                } else {
                    cnt2++;
                }
            }
        }

        if (cnt1 == 4) {
            ans[cnt2]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << ans[i] << endl;
    }
    cout << endl;
}