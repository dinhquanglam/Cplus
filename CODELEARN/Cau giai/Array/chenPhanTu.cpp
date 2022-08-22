#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,k,x;
    cout << "so phan tu cua mang la: ";
    cin >> n;
    cout << "nhap " << n <<" phan tu"<< endl;
    for (int i =0;i<n;i++ ){
        cin >> a[i];
    }
    cout << "vi tri chen: ";
    cin >> k;
    cout << "gia tri chen: ";
    cin >> x;
    for(int i=n; i>= k+1 ;i--){
        a[i] = a [i-1];
        }
        a[k] = x;
        n++;
    cout << "mang moi la: ";
    for( int i=0;i<n;i++){
        cout << a[i] <<" ";
    }
    return 0;
}
