#include<iostream>

using namespace std;

int main(){
    int num, sum = 0, arr[42] = {0,};
    for(int i = 0; i < 10; ++i){
        cin>>num;
        if(!arr[num % 42]++) {
            sum++;
        }
    }
    cout<<sum;
}