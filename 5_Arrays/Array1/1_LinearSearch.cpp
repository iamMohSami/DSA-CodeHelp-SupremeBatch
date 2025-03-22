#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[] , int size, int target) {
    for(int i = 0; i < size; i++){
        if(arr[i] == target) return true;
    }
    return false;  // Element not found in array
}

int main() {
    //Linear Search 
    int size ; 
    cout << "Enter the Size of Array : " ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0; i < size; i++) {
        cout << "Enter Element " << i << " :" ; 
        cin >> arr[i] ;
    }

    int search_element ;
    cout << "Enter Element to Search/Target Value : " ;
    cin >> search_element ;
    bool answer = LinearSearch(arr, size, search_element) ; 

    if(answer) cout << "Element Found" << endl ;
    else cout << "Element Not Found" << endl ; 

    return 0 ;
}