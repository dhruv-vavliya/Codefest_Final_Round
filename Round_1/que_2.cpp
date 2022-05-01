#include <bits/stdc++.h>
using    namespace std;

int32_t main(){
    cin.tie(0), cin.sync_with_stdio(0);

    int n;  
    cin >> n;

    vector<int> dp( 1e5+1 );
    dp[1] = 1;
    dp[2] = 1;

    // time complexity : O(n)
    for( int i=3 ;i<=1e5 ;i++ ){
        dp[i] = dp[i-1] + dp[i-2];
    }   

    int flag = 0;
    for( int i=0 ;i<=1e5 ;i++ ){
        if( dp[i] == n ){
            cout << "given number is fibonacci number...\n";
            flag = 1;
        }
        if( dp[i] > n ){
            if(!flag){
                cout << "sorry! given number is not fibonacci number...\n";
            }
            for( int j=0 ;j<5 ; j++ ){
                cout << dp[i+j] << ' ';
            }cout << '\n';
            exit(0);
        }
    }
}