#include<iostream>
#include<map>

using namespace std;

int main( ){
    int n, a[n];
    for ( int i=0; i<n; i++){
    cin>> a[i];
    }
    map < int,int >m;
    for( map <int,int)::iterator it =m.begin();it != m.end();it++){
    if(m.find(a[i])= m.ednd()){
            m.insert(pair<int, int >(a[i],1));

    }
        for (map<int,int>:: iterator it=m.begin();it!=m.end();it++){
            cout << it-> first << ";" << it-> second << endl;;

        }
        return 0;
    }
