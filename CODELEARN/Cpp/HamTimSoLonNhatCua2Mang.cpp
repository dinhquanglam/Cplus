#include<iostream>
using namespace std;
int maxOfArray(int a[100], int n ){
int max=a[0];
for(int i=0;i<n;i++){

         if(a[i] > max){
            max = a[i];

         }

    }
   return  max;
}
int main(){
int a[100], b[100];
int n,m;
cin >> n;
for (int i=0;i<n;i++){
    cin >> a[i];
}
cin >> m;
for(int j=0;j<m;j++){
    cin >> b[j];
}
cout << maxOfArray(a,n) << " "<< maxOfArray(b,m);
}
