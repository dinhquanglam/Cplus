#include<iostream>

using namespace std;

int show(string s[100], int n){

for(int i=0;i<n;i++){
        if(s[i].size() >=3){
    cout << s[i] << " ";
    }
}

}

int main(){
string s[100];
int n;
cin >> n;
for(int i=0;i<n;i++){
    cin >> s[i];
}
show(s,n);
}
