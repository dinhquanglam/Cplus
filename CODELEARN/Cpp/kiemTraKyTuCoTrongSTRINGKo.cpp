#include<iostream>

using namespace std;

int main() {
    int test=-1;
    string s;
    char c;
    cin >> s >> c;
    for (int i=0;i < s.size();i++){
        if(s[i]==c){
            test = i;
         break;
        }
        }
    cout << test;
    return 0;
}
