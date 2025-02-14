#include<iostream>
#include<cmath>
using namespace std ; 

// int DecimalToBinaryMyMethod(int num) {
// int bin[32] ; 
//     int i =0 ; 
//     while(num > 0){
//         bin[i] = num%2 ; 
//         num = num/2 ; 
//         i++ ; 
//     }
//     for(int j=i-1 ; j>=0 ; j--){
//         cout << bin[j]  ; 
//     }
// cout << endl ; 
// }

int DecimalToBinaryDivisonMethod(int num) {
    int number =0 ; 
    int i=0 ; 
    while(num > 0) {
        int bin = num%2 ; 
        number = bin * pow(10,i++) + number; 
        num = num/2 ; 
    }  

cout << number <<  endl ; 
}



int main() {
    int num ; 
    cout << "Enter Decimal Number : "  ; 
    cin >> num  ; 

    // DecimalToBinaryMyMethod(num) ; 
    DecimalToBinaryDivisonMethod(num) ;
    
    return 0; 

}

