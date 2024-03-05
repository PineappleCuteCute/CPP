#include<bits/stdc++.h>
using namespace std;

int searchMin(int a[], int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(a[k] > a[i]){
            k = i;
        }
    }
    return k;
}

int searchMax(int a[], int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(a[k] <= a[i]){
            k = i;
        }
    }
    return k;
}

// int swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

void prinArray(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int a[100001];
int main(){
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int csMin = searchMin(a, n);
	int csMax = searchMax(a, n);
	swap(a[csMin], a[csMax]);
	prinArray(a, n);
	
	return 0;
}