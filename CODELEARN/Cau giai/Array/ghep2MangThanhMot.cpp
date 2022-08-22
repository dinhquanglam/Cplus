// gop 2 day a vs b tang dan thanh 1 day c tang day .
#include<iostream>
using namespace std;
int main(){
int a[100], b[100], c[100];
int n,m;
cin >> n;
for(int i=0;i<n;i++){
    cin >> a[i];
}
cin >> m;
for(int i=0;i<m;i++){
    cin >> b[i];
}
int i=0,j=0;
int size =0;
while (i<n && j<m){
    if(a[i]<b[j]){
        c[size] = a[i];
        size = size + 1;
        i = i+1;
    }
    else{
        c[size] = b[j];
        size = size + 1;
        j=j+1;}
}
while (i<n){
    c[size] = a[i];
    size +=1;
    i = i+1;
}
while (j<m){
    c[size] = b[j];
    size +=1;
    j=j+1;
}
for( int i= 0; i<size ;i++){
    cout << c[i] << " ";
}
return 0;




}

