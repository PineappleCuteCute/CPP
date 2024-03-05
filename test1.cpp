#include <bits/stdc++.h>

void generate_collections(int n, int M, int current[], int index) {
    if (index == n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += current[i];
        }
        if (sum == M) {
            for (int i = 0; i < n; i++) {
                printf("%d", current[i]);
                if (i < n - 1) {
                    printf(" ");
                }
            }
            printf("\n\n");  // In hai dòng trống sau mỗi hoán vị
        }
        return;
    }

    for (int i = 1; i <= M; i++) {
        current[index] = i;
        generate_collections(n, M, current, index + 1);
    }
}

int main() {
    int n, M;
    scanf("%d %d", &n, &M);

    int current[n];
    generate_collections(n, M, current, 0);

    return 0;
}
