#include<bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

int a[100001];
int main(){
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x;
    cout << search(a, n, x);
    return 0;
}