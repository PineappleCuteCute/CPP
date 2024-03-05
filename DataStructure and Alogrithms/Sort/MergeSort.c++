#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(i=0;i<n1;i++){
        L[i] = a[l + i];
    }
    for(j=0;j<n2;j++){
        R[j] = a[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while(i<n1 && j<n2){
        if (L[i] <= R[j]){
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        a[k] = R[j];
        j++;
        k++;
}
}
int mergeSort(int a[], int l, int r){
    if(l<r){
        int m= l + (r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
    return 0;
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
}
int a[100001];
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
    mergeSort(a, 0, n - 1);
    printArray(a, n);
    
    return 0;
}