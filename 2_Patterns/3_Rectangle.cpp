#include<iostream>
using namespace std ; 

int main(){
    int row, column ; 
    cout << "Enter Number of Rows : " ; 
    cin >> row ; 
    cout << "Enter Number of Columns : " ; 
    cin >> column ;

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "*" << " " ; 
        }
        
    cout << endl ;
    }
    return 0 ; 
}