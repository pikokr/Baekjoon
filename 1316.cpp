#include <iostream>
#include <algorithm>

using namespace std;

bool isGrp(string str) {
    int err = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != str[i + 1]) {
            string newWord = str.substr(i + 1, str.size());
            if (count(newWord.begin(), newWord.end(), str[i]) > 0)
                err++;
        }
    }

    if (err != 0)
        return false;

    return true;
}

int main() {
    int c;
    cin >> c;
    int cnt = 0;
    for (int i = 0; i < c; ++i) {
        string cur;
        cin >> cur;
        if (isGrp(cur)) {
            cnt++;
        }
    }
    cout << cnt;
}
