#include <bits/stdc++.h>
using    namespace std;

int32_t main(){
    cin.tie(0), cin.sync_with_stdio(0);

    int h ,m;
    string slot;
    cin >> h >> m >> slot;

    // time complexity : O(1)
    int tot = h*60 + m;
    if( slot == "PM" and tot/60 != 12 ){
        tot += 12*60;
    } 
    if( slot == "AM" and tot/60 == 12 ){
        tot -= 12*60;
    }

    cout << tot/60 << ' ' << tot%60 << '\n';   
}