#include<iostream>
using namespace std;
int main(){
    int *a;
    int n;
    cin >> n;
    a = new int [n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if(a[i]%3==0 && a[i]%5!=0){
            cout << a[i] << " ";
        }
    }
    delete []a;
    return 0;
}
