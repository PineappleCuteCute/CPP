#include<bits/stdc++.h>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

int SapXepChon(int a[], int n){
    int Min;
    for(int i=0;i<n-1;i++){
        Min = i;
        for(int j=i+1;j<n;j++){
            if(a[Min] > a[j]){
                Min = j;
            }
        }
        if(i!=Min){
            int temp = a[i];
            a[i] = a[Min];
            a[Min] = temp;
        }
    }
    return 0;
}

int a[100001];
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	SapXepChon(a, n);
	printArray(a, n);
	
	return 0;
}