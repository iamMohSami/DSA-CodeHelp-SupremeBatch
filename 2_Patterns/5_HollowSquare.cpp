#include<iostream>
using namespace std ; 

int main() {
    //Hollow Square
    /*
    
    side = 4 
    *   *   *   *
    *           *
    *           *
    *   *   *   *
    
    
    */
   int side ; 
   cout << "Enter Side : " ; 
   cin >> side ; 
   /*
   SOLUTION 1

   for (int row = 0; row < side; row++)
   {
        for (int col = 0; col < side; col++)
        {
           if (row==0 || row==side-1)
           {
            cout << "* " ; 
           }
           else{
            if (col==0 || col==side-1)
            {
                cout << "* " ; 
            }
            else{
                cout << "  " ; 
            }
            
           }
           
        }
        cout << endl ;    
   }
   */

  // SOLUTION 2
  for (int i = 0; i < side; i++)
  {
    for (int j = 0; j < side; j++)
    {
        if(i==0 || i==side-1 || j==0 || j==side-1) {
            cout << "* " ; 
        }
        else{
            cout <<"  " ;
        }
    }
cout << endl ; 
    
  }
  
   

    return 0 ; 
}