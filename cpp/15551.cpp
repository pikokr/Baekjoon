#include <iostream>

using namespace std;

int main() {
    int cnt;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> cnt;

    int x, y;

    for (int i = 0; i < cnt; ++i) {
        cin >> x >> y;
        cout << x + y << '\n';
    }
}