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
4 * 4 * 4 * 4
3 * 3 * 3
2 * 2
1 

*/
    int n ; 
    cout << "Enter n : " ; 
    cin >> n ; 
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j%2==0) cout <<i+1 ; 
            else cout << " * " ; 
        }
    cout << endl; 
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < 2*n-2*i-3; j++)
        {
             if(j%2==0) cout <<i+1 ; 
            else cout << " * " ; 
        }
    cout << endl ; 
    }
    
    
    
    
   
    return 0 ; 
}