#include<iostream>
using namespace std ; 

int main() {
    // basic for loop 
    for (int i = 0; i < 5; i++)
    {
        cout  << i << " " ;
    }
    cout << endl ; 
    // nested loop 
    // Outer Loop ki ek single value ke liye Inner Loop Pura chalta hai
    for (int i = 1; i <=3 ; i++)
    {
        cout << i << endl ; 
        for (int j = 0; j < 2; j++)
        {
            cout << j << " " ; 
        }
        cout << endl;
        
    }

    for (int i = 1; i <=3 ; i++)
    {
        cout << i << "->" ; 
        for (int j = 0; j < 2; j++)
        {
            cout << "*" << " " ; 
        }
        cout << endl;
        
    }

    // Rules for Patterns



    return 0 ; 
    
}
