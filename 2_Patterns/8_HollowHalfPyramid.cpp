#include<iostream>
using namespace std ; 

int main() {
    /*
    
    n=6 

    *
    *   *
    *       *
    *           *
    *               *
    *   *   *   *   *   *
    
    
    */



    int n ; 
    cout << "Enter n : " ; 
    cin >> n ; 

    for(int i=0 ; i<n ; i++) {
        for (int j = 0; j < i+1 ; j++)
        {
            if (i==0 || i==n-1)
            {
                cout << "* " ; 
            }
            else{
                if (j==0 || j==i)
                {
                    cout << "* " ; 
                }
                else{
                    cout <<"  " ; 
                }
                
            }
            
        }
        cout << endl ; 
    }


    //solution 2 

    /*
    for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < i+1; j++)
    {
        if(i==0 || i==n-1 || j==0 || j==i) {
            cout << "* " ; 
        }
        else{
            cout <<"  " ;
        }
    }
cout << endl ; 
    
  }
    
    
    */

    return 0 ; 
}