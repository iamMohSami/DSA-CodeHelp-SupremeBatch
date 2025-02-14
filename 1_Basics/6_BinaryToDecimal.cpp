#include<iostream>
#include<math.h>
using namespace std ; 

int main(){
    string binary ; 
    cout << "Enter Your Binary Number(only +ve) :" ; 
    cin >> binary ; 
    int sum =0 ; 
    for(int i=0 ; i<binary.length() ; i++){
        if(binary[binary.length() -1 - i] == '1') {
            sum += pow(2,i) ; 
        }
    }
    cout << sum << endl ;
    int n ; 
    cin >> n ; 
    int sum2 = 0 ; 
    int i=0 ; 
    while(n>0) {
        int bit = n%10 ;
        float val =  pow(2,i++) ; 
        sum2 += bit * val; 
        n=n/10 ; 
    }
    cout << sum2 << endl ;
    return 0 ;  
}

 