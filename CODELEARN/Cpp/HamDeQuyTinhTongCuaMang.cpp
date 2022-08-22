#include<iostream>
using namespace std;
int sumOfArray(int a[100],int n){
    if (n==1) {
        return a[0];
    }
        return a[n-1]+sumOfArray(a,n-1);
}

int main(){
int n;
int a[100];
cin >> n;
for(int i=0;i<n;i++){
    cin >> a[i];
}
cout << sumOfArray(a,n);
return 0;
}
