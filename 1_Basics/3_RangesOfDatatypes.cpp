#include<iostream>
#include <climits>  // For UINT_MAX
using namespace std ; 

int main() {
    // 1. unsigned int
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Range of unsigned int: 0 to " << UINT_MAX << endl;


    // 2. signed int 
    int num1 = 7 ; 
    int num2 = -7 ; 
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Range of signed int: " << INT_MIN << " to " << INT_MAX << endl;
    return 0 ; 
}