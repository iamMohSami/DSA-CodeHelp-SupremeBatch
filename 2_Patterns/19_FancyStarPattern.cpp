#include<iostream>
using namespace std; 

int main(){

/*
n=5

1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4
5 * 5 * 5 * 5 * 5 

*/
    int n ; 
    cout << "Enter n : " ; 
    cin >> n ; 
    for (int i = 0; i < n; i++)
    {
        cout << i+1  ;
        for (int j = 0; j < i; j++)
        {
            cout << " * " << i+1 ; 
        }
    cout << endl ;
    }
    
    cout << endl ;
    // Alternate
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j%2==0) cout<<i+1 ; 
            else cout<<" * " ; 
        }
    cout << endl ;
        
    }
    
    
   
    return 0 ; 
}