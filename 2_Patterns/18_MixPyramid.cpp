#include<iostream>
using namespace std; 

int main(){

/*
n=4

* * * * - * * * *
* * * - - - * * *
* * - - - - - * *
* - - - - - - - *
* - - - - - - - * 
* * - - - - - * *
* * * - - - * * *
* * * * - * * * *




*/
    int n ; 
    cout << "Enter n : " ; 
    cin >> n ; 
    
    for (int i = 0; i < n; i++)
    {
        //stars
        for (int j = 0; j < n-i; j++)
        {
            cout << "* " ; 
        }
        //gaps
        for (int j = 0; j < 2*i+1 ; j++)
        {
             cout << "  " ; 
        }
         //stars
        for (int j = 0; j < n-i; j++)
        {
            cout << "* " ; 
        }  
    cout << endl ;    
    }
    //reverse order
    for (int i = 0; i < n; i++)
    {
        //stars
        for (int j = 0; j < i+1; j++)
        {
            cout << "* " ; 
        }
        //gaps
        for (int j = 0; j < 2*n-2*i-1 ; j++)
        {
             cout << "  " ; 
        }
         //stars
        for (int j = 0; j < i+1; j++)
        {
            cout << "* " ; 
        }       
    cout << endl ; 
    }

    return 0 ; 
}