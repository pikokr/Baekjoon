#include <iostream>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; ++i) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
    }
}