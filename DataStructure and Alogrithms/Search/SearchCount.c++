#include<bits/stdc++.h>
using namespace std;

int a[100001];
int searchCount(int n, int x){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    cout << count;
}

int main(){
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    searchCount(n, x);
    return 0;
}