#include<bits/stdc++.h>
using namespace std;

int minValue(int arr[][4] , int r , int c  ) {
    //linear search
    int minValue = INT_MAX ;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            minValue = min(arr[i][j] , minValue) ; 
        }
    }  
    return minValue ; 
}

int maxValue(int arr[][4] , int r , int c  ) {
    //linear search
    int maxValue = INT_MIN ;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            maxValue = max(arr[i][j] , maxValue) ; 
        }
    }  
    return maxValue ; 
}


int main() {
    //creating static 2D array as a vector
    int arr[3][4] = {{70,23,41,10},{48,63,7,98},{56,10,118,12}};
    int answer = minValue(arr, 3,4) ; 
    cout << "The Mininum Value is :" << answer << endl ; 

    int answer2 = maxValue(arr, 3,4) ; 
    cout << "The Maximum Value is :" << answer2 << endl ; 
}
