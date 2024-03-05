#include<bits/stdc++.h>
using namespace std;

int DivideAndConquer(int a[], int l, int r, int x){
    if(l==r){
        if(a[l] == x) return 1;
        else return 0;
    }
    else{
        int m = (l+r)/2;
        return DivideAndConquer(a, l, m, x) + DivideAndConquer(a, m+1, r, x);
    }
}

int a[100001];
int main(){
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x;
    cout << DivideAndConquer(a, 0, n-1, x);
    return 0;
}

