#include<iostream>

using namespace std;

int main() {
    int a[100];
    int term;
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (a[i]>a[j]){
                    term = a[j];
                    a[j] = a[i];
                    a[i] = term;
                }
            }

    }
    for (int i=0;i<n;i++){
            cout << a[i];

    }
    return 0;
}
