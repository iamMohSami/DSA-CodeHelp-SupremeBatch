#include<bits/stdc++.h>
using namespace std;



// QUE : Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. You must implement a solution with a linear runtime complexity and use only constant extra space.

int solution(int arr[], int size) {
    int ans = 0 ; 
    for(int i = 0; i < size; i++){
        ans ^= arr[i] ;  // XOR operation to get the unique number
    }
    cout << ans << endl ; 
}


int main() {
    //WKT, 
    int arr[] = {4, 1, 2, 1, 4, 2, 3};
    int size = 7 ; 
    solution(arr, size) ; 
    return 0 ; 
}