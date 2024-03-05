#include<bits/stdc++.h>
using namespace std;

int a[100001];
int b[100001];

int BinSearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){ // Change to l <= r
        int mid = (l+r)/2;
        if(a[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1; // Adjust r
        }
    }
    if(l < n && a[l] == x){ // Check if l is within bounds
        return l;
    }
    return -1;
}

void printArray(int a[], int n, int l, int r){
    for(int i = l; i <= r; i++){ // Change to <= r
        cout << a[i] << " ";
    }
}

bool solve(int a[], int b[], int n, int s){
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = b[i-1] + a[i];
    }
    for(int i = 0; i < n; i++){
        if(b[i] == s){
            printArray(a, n, 0, i);
            return true;
        }
        if(b[i] > s){
            int l = BinSearch(b, n, b[i] - s);
            if(l != -1){
                printArray(a, n, l + 1, i);
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> s;
    bool k = solve(a, b, n, s);
    if(!k){
        cout << -1;
    }
    return 0;
}
