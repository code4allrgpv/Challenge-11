
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string findNthNo(ll n)
{
    string res = "";
    while (n >= 1)
    {
       
        if (n & 1)
        {
            res = res + "1";
            n = (n-1)/2;       
        }
 
      
        else
        {
            res = res + "5";
            n = (n-2)/2;     
        }
    }

   reverse(res.begin(), res.end());
   return res;
}

int main()
{
    ll n;cin>>n;
    cout << findNthNo(n);
    return 0;
}
