#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string current = "";
    string in;
    getline(cin, in);
    for (int i = 0; i < in.size(); ++i) {
        if (in[i] == ' ') {
            if (current != "") {
                words.push_back(current);
            }
            current = "";
            continue;
        }
        current += in[i];
    }
    if (current != "") {
        words.push_back(current);
    }
    cout << words.size();
}