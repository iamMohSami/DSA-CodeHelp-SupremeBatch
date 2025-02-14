#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter value of n :" ; 
    cin >> n ; 

    //hollow pyramid with a change in if cond
    for (int i = 0; i < n; i++)
    {
        //gaps
        for (int j = 0; j < n-i-1 ; j++)
        {
            cout << " " ; 
        }
        //stars
        for (int j = 0; j < i+1; j++)
        {
            if (i==0  || j==0 || j==i)
            {
                cout << "* ";
            }else cout <<"  ";
            
        }
        
    cout << endl ; 
    }
    // inverted hollow pyramid with a change in if cond
    for (int i = 0; i < n; i++)
    {
        //gaps
        for (int j = 0; j < i ; j++)
        {
            cout << " " ; 
        }
        //stars
        for (int j = 0; j < n-i; j++)
        {
         if ( i==n-1 || j==0 || j==n-i-1)
         {
           cout << "* ";
         }else cout <<"  " ; 
         
        }
        
    cout << endl ; 
    }
    



    return 0;
}