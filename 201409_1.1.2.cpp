#include <iostream>
using namespace std;

const int Border = 100;
bool f[Border][Border];

int main () {
    int n, x1, y1, x2, y2;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2 >> y1 >> y2;
        for (int x = x1; x <= x2; x ++) {
            for (int y = y1; y <= y2; y ++) {
                f[x][y] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < Border; i++) {
        for (int j = 0; j < Border; j++) {
            if (f[i][j]) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}