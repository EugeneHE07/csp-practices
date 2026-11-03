#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<int,int>, bool> A;
    pair<int, int> pos;

    for (int i = 0; i < n; i++) {
        /*int x, y;
        cin >> x >> y;
        A[make_pair(x,y)] = true;*/
        cin >> pos.first >> pos.second;
        A[pos] = true;
    }

    int ans[5] = {0};

    int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
    int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

    for (auto it = A.begin(); it != A.end(); it++) {
        int x = it->first.first;
        int y = it->first.second;

        int cnt1 = 0, cnt2 = 0;

        for (int j = 0; j < 8; j++) {
            pos = {x + dx[j], y + dy[j]};
            if (A.count(pos)) {
                if(j < 4){
                    cnt1 ++;
                }else{
                    cnt2 ++;
                }
            }
        }

        if(cnt1 == 4) {
            ans[cnt2] ++;
        }
        
    }

    for (int i = 0; i < 5; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}