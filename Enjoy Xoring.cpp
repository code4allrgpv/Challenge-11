#include "bits/stdc++.h"
using namespace std;
 
typedef long long int ll;
typedef long int l;

int main()
{
    fast_io;

    ll t, n, a, b[2];
    cin >> t;
    while(t--){
        cin >> n;
        b[0] = b[1] = 0;

        while(n--){
            cin >> a;
            b[a % 2]++;
        }

        cout << b[0] * b[1] << endl;
    }

    return 0;
}
