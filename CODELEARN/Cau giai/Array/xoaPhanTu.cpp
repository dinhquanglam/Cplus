#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,x;
    cout << "so phan tu cua mang la: " ;
    cin >> n;
    cout << "Nhap " << n << " gia tri: " << endl;
    for (int i =0;i<n;i++ ){
        cin >> a[i];
    }
    cout <<"Vi tri xoa: ";
    cin >> x;

    for(int i=x;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    cout << "mang moi la: ";
    for(int i=0;i<n;i++ ){
        cout << a[i]<< " ";
    }
    return 0;
}

