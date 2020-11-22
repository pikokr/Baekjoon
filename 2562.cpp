#include <iostream>

using namespace std;

int main() {
    int max = 0;
    int index = 0;

    for (int i = 0; i < 9; ++i) {
        int cur;
        cin >> cur;
        if (max < cur) {
            max = cur;
            index = i+1;
        }
    }

    cout << max << '\n';
    cout << index;
}