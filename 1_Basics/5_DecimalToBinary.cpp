#include<iostream>
#include<cmath>
using namespace std ; 

void DecimalToBinaryMyMethod(int n) {
    // My Method using Array
    int bin[32] ; 
    int i =0 ; 
    while(n > 0){
        bin[i] = n%2 ; 
        n = n/2 ; 
        i++ ; 
    }
    for(int j=i-1 ; j>=0 ; j--){
        cout << bin[j]  ; 
    }
cout << endl ; 
}

int DecimalToBinaryDivisonMethod(int n) {
    int binaryno =0 ; 
    int i=0 ; 
    while(n > 0) {
        int bit = n % 2 ; 
        float val = pow(10, i++) ; 
        binaryno = bit * val + binaryno; 
        n = n / 2 ; 
    }  
return binaryno ; 
}

int DecimalToBinaryBitwiseMethod(int n) {
    int binaryno =0 ; 
    int i=0 ; 
    while(n > 0) {
        int bit = (n & 1) ; 
        float val = pow(10, i++) ; 
        binaryno = bit * val + binaryno; 
        n = n >> 1   ; 
    }  

return binaryno ; 
}


int main() {
    int n ; 
    cout << "Enter Decimal Number : "  ; 
    cin >> n  ; 
    cout << "My Array Method ans : " ; 
    DecimalToBinaryMyMethod(n) ; 
    int ans2 = DecimalToBinaryDivisonMethod(n) ;
    int ans3 = DecimalToBinaryBitwiseMethod(n) ;
    cout << "Divison Method ans : " << ans2 << endl ;
    cout << "Bitwise Method ans : " << ans3 << endl ;
    return 0; 

}

