#include<bits/stdc++.h>
using namespace std ; 

void transpose(int arr[][3] , int r , int c) {
    for(int i=0 ; i<r ; i++){
        for(int j=i ; j<c ; j++) {
            if(i==j) continue;
            swap(arr[i][j] , arr[j][i]) ; 
        }
    }
}


int main() {
    int arr[3][3] = {
        {10,20,30}, 
        {40,50,60} , 
        {70,80,90}
    } ;

    //printing before Transpose
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            cout << arr[i][j] << "  " ; 
        }
        cout << endl ; 
    } 

    transpose(arr, 3 ,3) ; 

    //printing after Transpose
    cout << "After Transpose : " << endl ;
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            cout << arr[i][j] << "  " ; 
        }
        cout << endl ; 
    } 


    return 0 ; 
}