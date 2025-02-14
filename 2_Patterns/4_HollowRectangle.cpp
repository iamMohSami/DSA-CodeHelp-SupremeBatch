#include<iostream>
using namespace std ; 

int main() {

/*

r=5
c=4

* * * * * 
*       *
*       *
* * * * * 

*/
    int l , b ; 
    cout << "Enter number of Row :" ; 
    cin >> l ; 
    cout << "Enter number of Column :" ; 
    cin >> b ; 
    for(int row=0 ; row<l ; row++){

        for (int col = 0; col < b; col++)
        {
            if(row==0 || row==l-1) {
                cout << "* "; 
            }
            else{
                if (col==0 || col==b-1)
                {
                    cout << "* "  ; 
                }
                else {
                    cout << "  " ; 
                }
                
            }
            
        }
        cout << endl ; 

    }

    return 0 ; 
}