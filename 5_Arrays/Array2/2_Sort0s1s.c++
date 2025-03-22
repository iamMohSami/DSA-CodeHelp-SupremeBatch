#include<bits/stdc++.h>
using namespace std;

void countZerosOnes(int arr[] , int size) {
    int countZeros = 0, countOnes = 0 ;
    for(int i = 0; i < size ; i++) {
        if(arr[i] == 0) countZeros++ ;
        else countOnes++ ;
    }

    //Loop Approach
    for(int i = 0; i < countZeros; i++){
        arr[i] = 0 ;
    }
    for(int i=countZeros; i < size; i++){
        arr[i] = 1 ;
    }

    //fill method approach
    // fill(arr, arr + countZeros, 0);
    // fill(arr + countZeros, arr + size, 1);

    //Printing the modified array
    cout << "Modified Array : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
 
    
}

int main() {
    //Sorting Zeros and Ones
    int size ; 
    cout << "Enter the Size of Array : " ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0; i < size; i++) {
        cout << "Enter Element [0/1] :" ; 
        cin >> arr[i] ;
    }

    countZerosOnes(arr, size) ; //TC: O(n)
    
    // Approach 2 => SORT Inbuilt Function method
    int size2 ; 
    cout << "Enter the Size of Array2 : " ;
    cin >> size2 ;

    int arr2[size2] ;
    for(int i = 0; i < size2; i++) {
        cout << "Enter Element [0/1] :" ; 
        cin >> arr2[i] ;
    }
    sort(arr2, arr2 + size2) ; //TC: O(n log n)
    cout << "Modified Array2 : ";
    for(int i = 0; i < size2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl ;

    // Approach 3 => Two Pointer
    



    return 0 ;
}