#include<iostream>
using namespace std;
int luythua(int a, int b){
    if(b==1) return a;

    return a*luythua(a, b-1);

    }

int main (){
    int a,b;
    cin >> a >> b;
    cout << luythua(a,b);
    return 0;
}
