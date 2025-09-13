#include <iostream>
#include <vector>
using namespace std;

#define int long long
const int MOD = 1000000007;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int n, target_sum;
    cin >> n >> target_sum;
    
    vector<int> coins(n);
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    vector<int> dp(target_sum + 1, 0);
    dp[0] = 1;  // One way to make sum 0: use no coins
    
    // For each possible sum from 1 to target_sum
    for(int sum = 1; sum <= target_sum; sum++) {
        // Try each coin
        for(int i = 0; i < n; i++) {
            if(sum >= coins[i]) {
                dp[sum] = (dp[sum] + dp[sum - coins[i]]) % MOD;
            }
        }
    }
    
    cout << dp[target_sum] << endl;
    return 0;
}