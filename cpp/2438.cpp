#include <iostream>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cout << "*";
        }
        cout << '\n';
    }
}