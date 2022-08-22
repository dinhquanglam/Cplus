#include<iostream>

using namespace std;


struct Student{
    string name;
    int age;
    void display(){
    cout <<"Name: " << name << endl;
    cout <<"Age: "<< age << endl;
    }
    void info(){
    cin>> name >> age;
    }
};

int main(){
    int n;
    cin >> n;
    Student students[100];
    for(int i=0;i<n;i++){
       students[i].info();
    }
    for(int i=0;i<n;i++){
        students[i].display();
    }
    return 0;
    }
