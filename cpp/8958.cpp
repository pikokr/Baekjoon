#include <iostream>

using namespace std;

int main() {
    int tot;
    cin>>tot;
    for (int j = 0; j < tot; ++j) {
        string str;
        cin >> str;

        int res = 0;

        int cur = 0;

        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == 'O') {
                cur += 1;
                res += cur;
            } else {
                cur = 0;
            }
        }
        cout << res << endl;
    }
}
