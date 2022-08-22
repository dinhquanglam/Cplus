#include<bits/stdc++.h>
#include<string.h>

using namespace std;
class main(){
    set<int> s;
    set<string> str;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    set<int>::iterator it = s.begin();
    for ( ;it!=s.end();it++){
        cout << *it << " ";

    }
    return 0;
    };
