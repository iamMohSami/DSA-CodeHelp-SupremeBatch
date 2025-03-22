#include<bits/stdc++.h>
using namespace std;

void rowWiseSum(int arr[][4] , int r , int c  ) {
   for(int i=0 ; i<r ; i++) {
    int sum = 0 ; 
    for(int j=0 ; j<c ; j++){
        sum += arr[i][j] ; 
    }
    cout << "Sum of Row["<<i<<"] :"<< sum <<endl ; 
   }
}

void columnWiseSum(int arr[][4] , int r , int c  ) {
    for(int i=0 ; i<c ; i++) {
     int sum = 0 ; 
     for(int j=0 ; j<r ; j++){
         sum += arr[j][i] ; 
     }
     cout << "Sum of Column["<<i<<"] :"<< sum <<endl ; 
    }
 }


 void diagonalSum(int arra[][3] , int r , int c  ) {
    int sum = 0 ; 
    for(int i =0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(i==j) sum+= arra[i][j] ; 
        }
    }
    cout << "Left to right DiagonalSum :" << sum << endl ;
 }

 void diagonalSumRL(int arra[][3] , int r , int c  ) {
    int sum = 0 ; 
    for(int i =0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(i+j == r-1) sum+= arra[i][j] ; 
        }
    }
    cout << "Right to Left  DiagonalSum :" << sum << endl ;
 }


int main() {
    //creating static 2D array as a vector
    int arr[3][4] = {{70,23,41,10},{48,63,7,98},{56,10,118,12}};
   
    rowWiseSum(arr, 3 , 4 ) ; 
    columnWiseSum(arr, 3 , 4 ) ; 

    int arra[3][3] = {{70,23,41},{48,63,7},{56,10,118}};

    diagonalSum(arra,3,3) ; 
    diagonalSumRL(arra,3,3) ; 
}
