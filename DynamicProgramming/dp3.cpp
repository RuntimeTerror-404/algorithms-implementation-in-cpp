#include <bits/stdc++.h>
using namespace std;
int memo[1000];
// int a[1000];
int fib(int n){
    // int memo[n+1];
    if(memo[n] != 0){
        return memo[n];
    }
    if(n==0 || n==1){
        return 1;
    }
    else{
        memo[n] = fib(n-1) + fib(n-2);
    }
    return memo[n];
};



int main(){
    
    int n;
    cin>>n;
    cout<<fib(n);

}