/*
find sets of numbers that add up to 16 using dynamic programming
[2,4,6,10], total = 16
*/

#include <bits/stdc++.h>
using namespace std;



int rec(int a[], int total, int i){
    if(total == 0){
        return 1;
    }
    else if(total < 0){
        return 0;
    }
    else if(i < 0){
        return 0;
    }
    else if(total < a[i]){
        return rec(a, total-a[i], i-1);
    }
    else{
        return (rec(a, total-a[i], i-1) + rec(a, total, i-1));
    }
}

int countSubsets(int a[], int total, int n){
    return rec(a, total, n-1);
}

int main(){
    int a[] = {2, 4, 6, 10};
    int n = sizeof(a)/sizeof(int);
    // int x = rec(a, 18, n-1);
    int x = countSubsets(a, 16, n);
    cout<<x;
}