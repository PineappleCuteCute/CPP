#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
char s[MAX];           
int so[MAX];          
int n;               
int counts = 0;          

void input() {
    cin >> s;
    n = strlen(s);//tinh chuoi s
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    for (int i = 0; i < n; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;

            while (i < n && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                ++i;
            }
            so[counts++] = num;
            --i; 
        }
    }

    for (int i = 0; i < counts; ++i) {
        cout << so[i] << endl;
    }

    int result = so[0];
    for (int i = 1; i < counts; ++i) {
        result = gcd(result, so[i]);
    }
    cout << result << endl;
}

int main() {
    input();
    solve();
    return 0;
}