// memoization = it is a technique to store the data from a subproblem 
// for future usage to implement subproblems of the followed problem using 
// that stored data

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    int memo[n+2];
    memo[0] = 0;
    memo[1] = 1;
    for(int i=2; i<=n; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
};

int temp[1000];
int fib_2(int n){
    
    if(n<=1){
        return n;
    }
    if(temp[n] != 0){
        return temp[n];
    }
    else{
        temp[n] = fib_2(n-1) + fib_2(n-2);
        return temp[n];
    }
    
}

int main(){
    int n;
    cin>>n;
    
    cout<<fib_2(n);
}

// 1, 1, 2, 3, 5, 8, 13......