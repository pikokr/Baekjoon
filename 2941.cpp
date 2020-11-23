#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (int i = 0; i < vec.size(); ++i) {
        while (true) {
            int idx = str.find(vec[i]);
            if (idx == string::npos) break;
            str.replace(idx, vec[i].size(), ".");
        }
    }

    cout << str.size();
}
