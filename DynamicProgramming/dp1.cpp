#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
    
};
void fibSeq(int n){
    cout<<"fibonacci sequence of "<<n<<" is: "<<endl;
    int t1 = 0, t2 = 1;
    int nextTerm;
    // int i = 0;
    for(int i=0; i<=n; i++){
        if(i==0){
            cout<<t1<<" ";
        }
        if(i==1){
            cout<<t2<<" ";
        }
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
        cout<<nextTerm<<" ";
    }
};

void fibSeqUpton(int n){
    vector<int> a;
    int t1=0, t2=1;
    int nextTerm = t1 + t2;
    a.push_back(t1);
    a.push_back(t2);
    while(nextTerm<=n){
        a.push_back(nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

};

int main(){
    // fibonacci sequence
    // f = 0,1,1,2,3,5,8,13,21........and so on
    // 5th fibonacci number = 5
    int n;
    cin>>n;
    cout<<fib(n);
    cout<<" "<<endl;
    
    fibSeq(n);
    cout<<endl;
    fibSeqUpton(n);

}