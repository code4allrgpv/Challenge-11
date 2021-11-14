#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int p=(1*x)+(2*y)+(3*z);
        if(p%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    
    return 0;
}
