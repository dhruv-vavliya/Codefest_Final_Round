#include <bits/stdc++.h>
using    namespace std;

int display( int n ){
    int tot = 1;
    for( int i=2 ;i<=n ;i++ ){
        tot = tot*i;
    }
    return tot;
}


int32_t main(){
    cin.tie(0), cin.sync_with_stdio(0);

    int n;
    cin >> n;
    
    for( int i=1 ;i<=n ;i++ ){
        if( i%3 == 0 || i%5 == 0 ){
            cout << i  << ' ' << display(i) << '\n';
        }
    }
}   