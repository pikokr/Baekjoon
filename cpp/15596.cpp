#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long b = 0;
    for(vector<int>::iterator iterator = a.begin(); iterator < a.end(); iterator++) {
        b += *iterator;
    }
    return b;
}