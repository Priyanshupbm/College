#include <stdio.h> 
// FuncƟon to return maximum of two values
int max(int a, int b) { 
 return (a > b) ? a : b; 
} 
// FuncƟon to solve 0/1 Knapsack problem using DP
int knapSack(int W, int wt[], int val[], int n) { 
 int dp[n + 1][W + 1]; 
 // Build table dp[][] in boƩom-up manner 
 for (int i = 0; i <= n; i++) { 
 for (int w = 0; w <= W; w++) { 
 if (i == 0 || w == 0) 
 dp[i][w] = 0; // Base case: no items or 0 
capacity 
 else if (wt[i - 1] <= w) 
 dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 
1]], dp[i - 1][w]); 
 else 
 dp[i][w] = dp[i - 1][w]; 
 } 
 } 
 // Traceback: find which items are included 
 int res = dp[n][W]; 
 prinƞ("Maximum value in Knapsack = %d\n", res); 
 prinƞ("Items included (index starts from 1): ");
 int w = W; 
 for (int i = n; i > 0 && res > 0; i--) { 
 // If result is same as the one above, item not 
included 
 if (res == dp[i - 1][w]) 
 conƟnue;
 else { 
 // This item is included. 
 prinƞ("%d ", i);
 // Deduct its value and weight 
 res -= val[i - 1]; 
 w -= wt[i - 1]; 
 } 
 } 
 prinƞ("\n"); 
 return dp[n][W]; // Return max value 
} 
int main() { 
 int n, W; 
 prinƞ("Enter number of items: ");
 scanf("%d", &n); 
 int val[n], wt[n]; 
 prinƞ("Enter values of items:\n"); 
 for (int i = 0; i < n; i++) { 
 scanf("%d", &val[i]); 
 } 
 prinƞ("Enter weights of items:\n"); 
 for (int i = 0; i < n; i++) { 
 scanf("%d", &wt[i]); 
 } 
 prinƞ("Enter maximum capacity of knapsack: ");
 scanf("%d", &W); 
 knapSack(W, wt, val, n); 
 return 0; 
}
