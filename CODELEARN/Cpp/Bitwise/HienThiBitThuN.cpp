#include<iostream>
using namespace std;
int main(){
    int a,n;
    cin >> a >> n;
    cout << ( (a >> (n-1) & 1) == 1 );
    return 0;
}
// 1111
