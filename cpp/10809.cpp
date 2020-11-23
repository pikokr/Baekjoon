#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    int res[26];

    for (int i = 97; i < 123; ++i) {
        for (int j = 0; j < str.size(); ++j) {
            if ((int) str[j] == i) {
                res[i - 97] = j;
                break;
            } else {
                res[i - 97] = -1;
            }
        }
    }

    for (int i = 0; i < 26; ++i) {
        cout << res[i];
        if (i != 25) {
            cout<<' ';
        }
    }
}
