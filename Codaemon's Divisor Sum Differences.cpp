#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long long int a,b;
    cin>>a>>b;
   long long int s1=0,s2=0;
    for(long long int i=1;i<=a;++i){
        s1+=(a/i)*i;
    }
    for(long long int i=1;i<=b;++i){
        s2+=(b/i)*i;
    }
    if(s1>s2){
        cout<<s1-s2;
    }
    else{
        cout<<s2-s1;
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
