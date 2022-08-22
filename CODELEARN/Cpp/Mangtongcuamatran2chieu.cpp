#include<iostream>

using namespace std;

int main() {
    int a[10][10];
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+= a[i][j];}}

           cout << sum;
}
