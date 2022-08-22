#include<iostream>
using namespace std;

void sortArray (int a[100],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    int n;
    int a[100];
    cin >> n;
    for(int i=0;i<n;i++){
    cin >> a[i];
}
sortArray(a,n);
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }

return 0;
}
