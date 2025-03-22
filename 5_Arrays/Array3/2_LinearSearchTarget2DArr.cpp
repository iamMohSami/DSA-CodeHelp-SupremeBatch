#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols ; 
    cout << "Enter the number of rows: ";
    cin >> rows ;
    cout << "Enter the number of columns: ";
    cin >> cols ;

    int arr[rows][cols] ;
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cout << "Enter Element at ["<< i <<"]["<< j <<"]: ";
            cin >> arr[i][j] ;
        }
    }

    int target ; 
    cout << "Enter the target number: ";
    cin >> target ;

    bool isFounded = false ; 
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            if(arr[i][j] == target){
                cout << "Target found at ["<< i <<"]["<< j <<"]" << endl ;
                isFounded = true ;
                break ;
            }
        }
    }
    if(!isFounded) cout << "Target not found in the array" << endl ;

    return 0 ; 
}