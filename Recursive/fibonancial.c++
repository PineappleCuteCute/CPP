#include<bits/stdc++.h>
using namespace std;

long long fibonanci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonanci(n-1) + fibonanci(n-2);
}

int main(){
	int n;
	cin >> n;
	cout << fibonanci(n);
	return 0;
}