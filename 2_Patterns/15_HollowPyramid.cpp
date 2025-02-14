#include<iostream>
using namespace std ; 


/*
n=5 

    *
   * *
  *   * 
 *     * 
* * * * *




*/

int main(){
    int n ; 
    cout << "Enter number of rows : " ; 
    cin >> n ; 
    for (int i = 0; i < n; i++)
    {
        //gaps
       for (int j = 0; j < n-i-1; j++)
       {
        cout << " ";  
       }
       //stars
        for (int j = 0; j < i+1 ; j++)
       {
       if (i==0 || i==n-1 || j==0 || j==i)
       {
        cout << "* " ;
       }else cout << "  " ; 
       
       }

       
    cout << endl ;
    }
    


    return 0 ;  
}