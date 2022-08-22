#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	int n;
	cin >> n;
	Student *students = new Student[100];
	for(int i=0;i<n;i++){
	cin >> students[i].name;
	cin >> students[i].age;
	cin >> students[i].score;
	}
	Student best = students[0];
	for(int i=0;i<n;i++){
	if(students[i].score > best.score ){
		best = students[i];

	}
	}
	cout << " Name: " << best.name;
		cout << " Age: " << best.age;
		cout << " Score: " << best.score;

	delete[] students;
	return 0;
}
