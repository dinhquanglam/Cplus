#include<stdio.h>

int main() {
    int a[100];
    int n;
    int max =a[0];
    for(int i=0;i<n;i++){
        scanf("%d ", a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){
            if(a[i] > a[j] ){
                max = a[i];
            }
        }
    }
    printf ("%d ", max);

    return 0;
}
