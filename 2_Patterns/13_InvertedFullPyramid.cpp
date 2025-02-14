#include<iostream>
using namespace std ; 


/*
n=5 

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