#include<iostream>
using namespace std;
int main(){
int a[100];
int b[100];
int n;
cin >> n;
for(int i=0;i<n;i++){
    cin >> a[i];
}
 int max=a[0];
 for (int i=0;i<n;i++){
    if(a[i]>max)
     max=a[i];
 }
 for(int i=0; i<=max; i++){
    b[i]=0;
}
for(int i=0;i<n;i++){
    b[a[i]] +=1;
}
for(int i=0; i<=max; i++){
    if(b[i]>0)
        cout << i <<" - " <<b[i]<<" ; ";
}
return 0;
}
