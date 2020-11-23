#include <iostream>

using namespace std;

bool asdf(int a){
    if(a < 100) return true;
    int x, y, z;
    x = a % 10;
    y = a % 100 / 10;
    z = a / 100;
    if(z-y == y-x) return true;
    return false;
}

int main() {
    int n, cnt = 0;
    cin>>n;
    for(int i =1; i <= n; i++){
        if(asdf(i)) cnt++;
    }
    cout<<cnt;
}