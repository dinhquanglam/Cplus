//Ban hay viet chuong trinh nhap tu ban phim so nguyen n va hien thi ra man hinh so cac uoc so cua n.
#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int count;
for (int i =1;i<=n;i++){
    if(n%i==0){
        count ++;
    }
    }
    cout << count;
 return 0;
}
