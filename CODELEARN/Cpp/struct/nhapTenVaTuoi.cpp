#include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    };
int main(){
    student s;
    cin >> s.name;
    cin >> s.age;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age;

    return 0;

}
