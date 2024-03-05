#include<bits/stdc++.h>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int quickSort(int a[], int l, int r){
    int p = a[(l+r)/2];
    int i = l, j = r;
    while (i<j)
    {
        /* code */
        while(a[i] < p){
            i++;
        }
        while (a[j]>p)
        {
            /* code */
            j--;
        }
        if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
        
    }
    if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
    return 0;
}

int a[100001];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    quickSort(a, 0, n-1);
	printArray(a, n);
    return 0;
}