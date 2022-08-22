#include<iostream>

using namespace std;

int sum(int n) {
    if (n == 0) return 0;;
    return n + sum(n - 1); // de quy goi lai chinh no va thuc hien tiep.

int main() {
    cout << sum(10);
    return 0;
}

/*
#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    return n*factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
*/
