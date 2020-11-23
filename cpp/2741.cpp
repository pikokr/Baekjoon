#include <iostream>

using namespace std;

int main() {
     int cnt;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cout << i + 1 << '\n';
    }
}