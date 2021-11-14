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
    while(t--)
    {
        int n,a=0,b=0,result;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0){
                a++;
            }
            else if(arr[i]==1){
               b++; 
            }
        }
        result= b*pow(2,a);
        cout<<result<<endl;
    }
    return 0;
}
