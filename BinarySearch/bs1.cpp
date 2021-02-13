#include <iostream>
using namespace std;

void insertionSort(int a[], int n){

    for(int i=1; i<n; i++){
        int current = a[i];
        int j = i-1;
        while(a[j] > current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
}

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
    // int a[] = {-2, 3, 4, 7, 8, 9, 11, 13};
    int a[] = {21, 16, 9, 44, 23, 11, 8, 19, 13, 0, 33};
    int n = sizeof(a)/sizeof(int);
    insertionSort(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" , ";
    }
    cout<<" \n "<<endl;
    int x = BinarySearch(a, 13, n);
    cout<<x;
}