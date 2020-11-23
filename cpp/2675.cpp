#include <iostream>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; ++i) {
        string result = "";
        int c;
        string str;
        cin >> c;
        cin >> str;
        for (int j = 0; j < str.size(); ++j) {
            for (int k = 0; k < c; ++k) {
                result += str[j];
            }
        }
        cout << result << '\n';
    }
}
