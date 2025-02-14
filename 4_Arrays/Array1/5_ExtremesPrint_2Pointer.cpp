#include<bits/stdc++.h>
using namespace std;


// MY APPROACH : Your approach works correctly but has unnecessary conditions, making it slightly less efficient in terms of logic clarity.
// void printExtremes(int arr[] , int size) {
//     int startIndex = 0;
//     int endIndex = size-1;

//     if(size%2 != 0) { //Arrray is Odd
//         while(startIndex != endIndex){
//             cout << arr[startIndex] << " | " << arr[endIndex] << endl ; 
//             startIndex++;
//             endIndex--;
//         }
//         cout << arr[startIndex] << endl ; //middlemost element
//     } else{ //array is Even
//         while(startIndex != (size/2)){
//             cout << arr[startIndex] << " | " << arr[endIndex] << endl ; 
//             startIndex++;
//             endIndex--;
//         }
//     }
// }

// BABBAR Bhaiyya's Approach | OPTIMAL SOLUTION
void printExtremes(int arr[] , int size){
    int i = 0 ; 
    int j = size - 1 ; 
    while(i<=j) {
        if(i==j){
            cout << arr[i] << endl ;
            break ;  //If array has only one element then print it and break the loop.
        }
        cout << arr[i] << " | " << arr[j] << endl ;
        i++ ;
        j-- ;  
    }

}

int main() {
    //Counting Zeros and Ones
    int size ; 
    cout << "Enter the Size of Array : " ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0; i < size; i++) {
        cout << "Enter Element " << i << " :" ; 
        cin >> arr[i] ;
    }

    printExtremes(arr, size);


    return 0 ;
}