#include <bits/stdc++.h>
using    namespace std;

int32_t main(){

    int n;
    cin >> n;

    vector<int> a(n);
    for( int i=0 ;i<n ;i++ ) cin >> a[i];

    // worst case : O(n^2)
    // best case : O(n)
    for( int i=0 ;i<n-1 ;i++ ){    
        int op = 0;
        for( int j=0 ;j<n-i-1 ;j++ ){  
            if( a[j] > a[j+1] ){
                swap(a[j] ,a[j+1]);
                op++;
            }
        }
        if(!op) break;
    }

    for( int i=0 ;i<n ;i++ ){
        cout << a[i] << ' ';
    }cout << '\n';
}