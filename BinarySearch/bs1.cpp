#include <iostream>
using namespace std;

int BinarySearch(int a[], int target, int n){
    // int n = sizeof(a)/sizeof(int);
    int left = 0;
    int right = n-1;
    while(left <= right){
        int mid = (left+right)/2;
        if(target == a[mid]){
            return mid;
        }
        else if(target < a[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
};

int main(){
    int a[] = {-2, 3, 4, 7, 8, 9, 11, 13};
    int n = sizeof(a)/sizeof(int);
    int x = BinarySearch(a, 10, n);
    cout<<x;
}