#include <stdio.h>

int countNumbers(int p) {
    if (p == 1) return 2;
    if (p == 2) return 4;
    
    int dp[p + 1];
    dp[1] = 2;
    dp[2] = 4;
    
    for (int i = 3; i <= p; ++i) {
        dp[i] = dp[i - 1] * 2 - dp[i - 3];
    }
    
    return dp[p];
}

int main() {
    int p;
    printf("Введіть кількість розрядів p: ");
    scanf("%d", &p);
    
    printf("Кількість чисел з %d розрядів: %d\n", p, countNumbers(p));
    return 0;
}
