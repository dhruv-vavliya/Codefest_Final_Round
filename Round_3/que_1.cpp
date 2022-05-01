#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int a[4][4];
    int b[4][4];
    int r1;
    int r2;

    // Generating first arrangment
    int c = 1;
    for( int i=0 ;i<4 ;i++ ){
        for( int j=0 ;j<4 ;j++ ){
            a[i][j] = c;
            c++;
            cout << a[i][j] << ' ';
        }cout << '\n';
    }
    
    // take position of element in first arrangement.
    cin >> r1; 

    set<int> st = { a[r1-1][0] ,a[r1-1][1] ,a[r1-1][2] ,a[r1-1][3] };
    b[0][0] = a[r1-1][0];
    b[1][0] = a[r1-1][1];
    b[2][0] = a[r1-1][2];
    b[3][0] = a[r1-1][3];

    // Generating second arrangment
    c = 1;
    for (int i = 0; i < 4; i++){
        for (int j = 1; j < 4; j++){
            while( st.count(c) ){
                c++;
            }
            b[i][j] = c;
            c++;
        }
    }

    for( int i=0 ;i<4 ;i++ ){
        for( int j=0 ;j<4 ;j++ ){
            cout << b[i][j] << ' ';
        }cout << '\n';
    }

    // take position of element in second arrangement.
    cin >> r2;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if( a[r1-1][i] == b[r2-1][j] ){
                cout << a[r1-1][i] << '\n';
                exit(0);
            }
        }
    }
}