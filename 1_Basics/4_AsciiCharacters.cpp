#include<iostream>
using namespace std ; 

int main() {
    char alphabet; 
    cout << "Enter your Character: ";  
    cin >> alphabet; 
    cout << "The ASCII equivalent of " << alphabet << " is: " << static_cast<int>(alphabet) << endl;
    /*
    WE GET THE CORRECT RESULTS FOR : int(alphabet) also! 
    BUT, 
    Using static_cast because Safer, more explicit, and preferred in modern C++ code.
    */ 

   cout << "Enter any number for Reverse ASCII Equivalent : " ; 
   int num ; 
   cin >> num ; 
   cout << "The ASCII character for number " << num << " is : " << static_cast<char>(num) << endl ;
    return 0; 
}
