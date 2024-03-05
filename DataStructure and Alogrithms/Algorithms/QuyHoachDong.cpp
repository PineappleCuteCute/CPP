#include<bits/stdc++.h>
using namespace std;

int a[100001];
int l[100001];

void printArray(int a[], int l, int r){
    for(int i=l;i<=r;i++){
        cout << a[i] << " ";
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    l[0] = 1;
    for(int i=1;i<n;i++){
        if(a[i] >= a[i - 1]){
            l[i] = l[i - 1] + 1;
        }
        else{
            l[i] = 1;
        }
    }
    int csMax = 0;
    for(int i=0;i<n;i++){
        if(l[csMax] < l[i]){
            csMax = i;
        }
    }
    printArray(a, csMax - l[csMax] + 1, csMax);
    return 0;
}
