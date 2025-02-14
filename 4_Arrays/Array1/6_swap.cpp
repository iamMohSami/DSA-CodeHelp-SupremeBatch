#include<bits/stdc++.h>
using namespace std;

int main() {
    //SWAPPING 2 integers can be done by 4 different methods
    // 1. temp variable
    // 2. XOR ^ 
    // 3. swap() function '
    // 4. Arthmetic Equation + & - 

    int a = 5, b = 10;
    
    // Method 1: using temporary variable
    int temp = a;
    a = b;
    b = temp;
    cout << "a =" << a << endl ;
    cout << "b =" << b << endl ;

    // Method 2: using XOR (^)
    // XOR (^) returns 1 if both bits are different, else 0
    a = a ^ b;      // a ^ b gives 15 (1111) i.e. 0101 ^ 1010 = 1111 Thus a=1111
    b = a ^ b;      // b = 1111 ^ 1010 = 0101 Thus b=0101
    a = a ^ b;      // a = 1111 ^ 0101 = 1010 Thus a=10101
    cout << "a =" << a << endl ;
    cout << "b =" << b << endl ;
    


    // Method 3: using swap() function
    swap(a, b);
    cout << "a =" << a << endl ;
    cout << "b =" << b << endl ;

    // Method 4: using Arthmetic Equation
    a = a + b;  // a = 15
    b = a - b;  // b = 15-5 => 10
    a = a - b;  // a = 15-10 => 5
    cout << "a =" << a << endl ;
    cout << "b =" << b << endl ;
 


    return 0 ; 
}