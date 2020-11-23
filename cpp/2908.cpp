#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int num) {
    string s = to_string(num);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}

int main() {
    int a, b;
    cin >> a >> b;
    a = rev(a);
    b = rev(b);
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }
}
