#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int array[], int size) {
// will try the Two pointer approach
int start = 0 ; 
int end = size-1 ; 
while(start < end){
    swap(array[start], array[end]) ;
    start++ ;
    end-- ;
}

// printing array after reversal
    cout << "\nArray After Reversal : " ;
    for(int i = 0; i<size; i++) {
        cout << array[i] << " " ;
    }
}

int main() {
    //Array reversal 
    int size ; 
    cout << "Enter the Size of Array : " ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0; i < size; i++) {
        cout << "Enter Element " << i << " :" ; 
        cin >> arr[i] ;
    }

    // printing array before reversal
    cout << "Array Before Reversal : " ;
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " " ;
    }

    ReverseArray(arr , size) ; 


    return 0 ;
}