#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> bin;
    int n;
    cin >> n;
    while(n>0) {
        bin.push(n%2);
        n = n/2;
    }
    while(!bin.empty()){
        cout << bin.top();
        bin.pop();
    }
    return 0;
}
