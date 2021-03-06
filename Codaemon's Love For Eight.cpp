#include <bits/stdc++.h>
using namespace std;
 
 
bool solve(string n, int l)
{
 
  
    if (l < 3) {
        if (stoi(n) % 8 == 0)
            return true;
 
   
        reverse(n.begin(), n.end());
        if (stoi(n) % 8 == 0)
            return true;
        return false;
    }
 

    int hash[10] = { 0 };
    for (int i = 0; i < l; i++)
        hash[n[i] - '0']++;
 
    for (int i = 104; i < 1000; i += 8) {
 
        int dup = i;
 
        int freq[10] = { 0 };
        freq[dup % 10]++;
        dup = dup / 10;
        freq[dup % 10]++;
        dup = dup / 10;
        freq[dup % 10]++;
 
        dup = i;
 
        if (freq[dup % 10] > hash[dup % 10])
            continue;
        dup = dup / 10;
 
        if (freq[dup % 10] > hash[dup % 10])
            continue;
        dup = dup / 10;
 
        if (freq[dup % 10] > hash[dup % 10])
            continue;
 
        return true;
    }
 
    return false;
}
 

int main()
{
    string number;cin>>number;
    int l = number.length();
 
    if (solve(number, l))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
