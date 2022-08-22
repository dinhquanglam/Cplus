#include <iostream>

using namespace std;

int maxvalue(int *p, int n){
    int max = p[0];
    for (int i=0;i<n;i++){
        if(p[i] > max){
            max = p[i];
        }
    }
    return max;
}
int main(){
    int a[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "max value is: " << maxvalue(a,n);
    return 0;
}

