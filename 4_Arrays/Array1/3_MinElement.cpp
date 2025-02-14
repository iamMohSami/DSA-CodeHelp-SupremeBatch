#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[] , int size) {
    int currMin = INT_MAX ; 
    for(int i = 0; i < size; i++) {
        // if(arr[i] < currMax) {
        //     currMin = arr[i] ;
        // }
        currMin = min(currMin, arr[i]);
    }
    return currMin ;  // returning the minimum element found in the array  
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

    int answer = minElement(arr, size) ; 
    cout << "The Minimum Element in the Array is : " << answer << endl ;


    return 0 ;
}