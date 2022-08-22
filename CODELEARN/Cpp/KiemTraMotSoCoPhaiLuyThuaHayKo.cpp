#include <iostream>
using namespace std;
int check(int n)
{
    int i,j,flag;
    if (n<4) return 0;
    for(i=2,flag=0,j=0;n>1;i++)
        if (n%i==0)
        {
            if (flag==0) flag=i;
            if (flag!=i) return 0;
            n/=i--;
            j++;
        }
    return j>1;
}
int main()
{
	int n;
	cin >> n;
	if(check(n)) cout << "Yes.";
	else cout << "No.";
	return 0;
}
