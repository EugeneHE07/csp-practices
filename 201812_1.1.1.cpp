#include <iostream>
using namespace std;

int main() {
    int red, yellow, green;
    cin >> red >> yellow >> green;

    int n,k,t,ans = 0;
    cin >> n;

    while (n--) {
        cin >> k >> t;
        if(k == 0){
            ans += t;
        }else if(k == 1) {
            ans += t;
        }else if(k == 2){
            ans +=(red + t);
        }
    }
    cout << ans << endl;

    return 0;
}