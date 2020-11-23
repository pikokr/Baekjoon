#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int arr[26]{0};
    int cntMax = 0;
    int idx = 0;
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        int n = str.at(i);

        arr[tolower(n) - 97]++;
    }

    for (int i = 0; i < 26; ++i) {
        if (arr[i] > cntMax) {
            cntMax = arr[i];
            idx = i;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (arr[i] == cntMax) {
            cnt++;
            if (cnt >= 2) {
                cout << "?";
                return 0;
            }
        }
    }

    cout << (char) (idx + 65);

    return 0;
}
