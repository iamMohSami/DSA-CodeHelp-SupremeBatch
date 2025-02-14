#include<iostream>
using namespace std ; 


/*
n=5 
    *
   * * 
  * * *
 * * * *
* * * * *
* * * * *
 * * * * 
  * * *
   * * 
    *


*/

int main(){
    int n ; 
    cout << "Enter number of rows : " ; 
    cin >> n ; 
    // will be formed if we combine above 2 examples

    // full pyramid
    for (int i = 0; i < n; i++)
    {
        //gaps
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " " ; 
        }

        //stars
        for (int k = 0; k < i+1 ; k++)
        {
            cout << "* " ; 
        }
    cout << endl ; 
    }
    //inverted full pyramid
    for (int i = 0; i < n; i++)
    {
        //gaps
        for (int j = 0; j < i; j++)
        {
            cout << " " ; 
        }

        //stars
        for (int k = 0; k < n-i ; k++)
        {
            cout << "* " ; 
        }
    cout << endl ; 
    }
    


    return 0 ; 
}