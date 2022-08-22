#include<iostream>

using namespace std;

int main() {
    int a,b;
    int i=1;
    int m=1;
    cin >> a >> b;
    while( i <= b){
        m = m*a;
        i++;
    }

    cout << m;

    return 0;
}
