#include<bits/stdc++.h>
using namespace std;

void printZerosandOnes(int arr[] , int size) {
    int countZeros = 0, countOnes = 0 ;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) countZeros++ ;
        else countOnes++ ;
    }
    cout << "Number of Zeros : " << countZeros << endl ;
    cout << "Number of Ones : " << countOnes << endl ;
}

int main() {
    //Counting Zeros and Ones
    int size ; 
    cout << "Enter the Size of Array : " ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0; i < size; i++) {
        cout << "Enter Element [0/1] :" ; 
        cin >> arr[i] ;
    }

    printZerosandOnes(arr, size) ; 

    return 0 ;
}