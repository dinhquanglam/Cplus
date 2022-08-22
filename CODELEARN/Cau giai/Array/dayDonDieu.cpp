#include<iostream>

 using namespace std;
int main(){
    int n;
    int a[100];
    cin >> n;
    for(int i=0;i<n;i++){
    cin >> a[i];
    }
    bool dayTang =true;
    bool dayGiam =true;
    for (int i=1; i<n; i++){
        if(a[i] <= a[i-1]) dayTang = false;
        if(a[i]>= a[i-1]) dayGiam =false;
    }
    if ( dayGiam || dayTang) cout << "YES"; // dayGiam va dayTang xay ra dong thoi
    else cout << "NO";

    return 0;
}
//////////////////////////////////////////////
/*
Cach 2:
    #include<iostream>
using namespace std;
int main(){
int a[100];
int n;
cin >> n;

for (int i=0;i<n;i++){
    cin >> a[i];
}
bool dayDonDieu = true;
if(n>2){
for ( int i=2;i<n;i++){
    if((a[i]-a[i-1])*(a[i+1]-a[i]) <= 0)
        dayDonDieu = false;
}
}
if (dayDonDieu) cout << "YES";
else cout << "NO";
return 0;
}
*/

