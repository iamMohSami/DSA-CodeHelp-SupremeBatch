#include<bits/stdc++.h>
using namespace std;

int maxElement(int arr[] , int size) {
    int currMax = INT_MIN ; 
    for(int i = 0; i < size; i++) {
        // if(arr[i] > currMax) {
        //     currMax = arr[i] ;
        // }
        currMax = max(currMax, arr[i]);
    }
    return currMax ;  // returning the maximum element found in the array  
}

int main() {
    //Maximum Element using linear search
    int size ; 
    cout << "Enter the Size of Array : " ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0; i < size; i++) {
        cout << "Enter Element " << i << " :" ; 
        cin >> arr[i] ;
    }

    int answer = maxElement(arr, size) ; 
    cout << "The Maximum Element in the Array is : " << answer << endl ;


    return 0 ;
}