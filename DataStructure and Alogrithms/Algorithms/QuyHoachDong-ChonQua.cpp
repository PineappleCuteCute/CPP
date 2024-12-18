#include<bits/stdc++.h>
using namespace std;

int s[10001][2];
int a[100001];

int chooseGifts(int a[], int n){
    for(int i=0;i<n;i++){
        s[i][0] = a[i];
        s[i][1] = -1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if (a[j] == a[i] && s[j][0] + a[i] > s[i][1]){
                s[i][1] = s[j][0] + a[i];
            }
		    for (int j = 0; j < i; j++){
            if (s[j][1] + a[i] > s[i][0]){
                s[i][0] = s[j][1] + a[i];
                }
            }
        }
    }
    int max = -1;
	for (int i = 0; i < n; i++)
	for (int j = 0; j < 2; j++)
	if (s[i][j] > max) max = s[i][j];
    return max;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << chooseGifts(a, n);
	return 0;
}