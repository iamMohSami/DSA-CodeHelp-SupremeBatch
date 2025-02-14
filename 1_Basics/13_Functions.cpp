#include<iostream>
#include<math.h>

using namespace std ;

int getSum(int a, int b) {
    int sum = a+b ; 
    return sum ; 
}

void printName(){
    cout << "Mohammad" << endl ;
    // return 0 ; WRONG, will give error
    return; 
    //void cannot return any VALUE, but we can still write "return" keyword which will signify end of the func
}

void printTable(int x){
    for(int i=1 ; i<=10 ; i++) {
        cout << x <<" * "<<i<<" = " << x*i << endl ; 
    }
}

char toUpperCase(char ch) {
    char ans = ch - 32 ; 
    // char ans = ch - 'a' + 'A' ; 
    // for 'p' => ans = 112 - 97 + 65
    return ans ; 
}

void printUpto100(){
    for(int i=1 ; i<=100 ; i++) {
        cout << i << " " ; 
    }
cout << endl ; 
}

float simpleInterest(float p , float r, float  t){
    float si = p*r*t ;  
    return si/100 ; 
}

void printPrime(){
    bool isPrime = false ; 
    cout << 1 << " " ; 
    for(int i=3 ; i<=100 ; i++){
        for(int j=2 ; j<=i-1 ; j++){
            if(i%j==0){
                isPrime=false;
                break ; 
            }
            isPrime = true ; 
        }
        if(isPrime) cout<<i<<" " ; 
    }
}

int sipCalc(int P , int n , float r) {
    float power = pow((1+r) , n) ; 
    int val = P * ( (power - 1 ) / r ) * (1+r) ; 
    return val ; 
}

void modifyValuePBV(int x) {
    x = x * 2; // Changes the copy, not the original
}

void modifyValuePBR(int &x) {
    x = x * 2; // Modifies the original variable
}










int main() {
    int x=5 , y=6 ; 
    //function call with arguments
    int ans = getSum(x,y) ; 
    cout << ans << endl ; 

    //voif func call
    printName() ; 
    printTable(x) ; 
    char cap = toUpperCase('p') ; 
    cout << cap << endl ;

    // HomeWork Functions 
    // 1. print 1 to 100 
    printUpto100() ; 

    // 2. find simple interest 
    float p , r , t ; 
    cout << "Enter Principal Amount (p) : " ;
    cin >> p ; 
    cout << "Enter Rate of Interest (r) : " ;
    cin >> r ;
    cout << "Enter Time (t) : " ;
    cin >> t ;  
    float si = simpleInterest(p,r,t) ; 
    cout << "The simple Interest is : " << si << "%" << endl ;

    // 3. prime numbers from 1 to 100 
    printPrime() ; 

    // 4 . SIP calcultor
    int P , n ; 
    float ra ; 
    cout << "Enter Amount Invested Periodically(P) : "  ; 
    cin >> P ; 
     cout << "Enter Total Months(n) :" ; 
     cin >> n ; 
    cout << "Interest rate(r) :" ; 
    cin >> ra  ;
    int fv = sipCalc(P , n ,ra) ; 
    cout << "The Future SIP value is :" << fv << endl ; 


    // Pass by value 
    int num = 10;
    modifyValuePBV(num);
    cout << "Value after modifyValue function: " << num << endl; 
    // num is still 10
    modifyValuePBR(num);
    cout << "Value after modifyValue function: " << num << endl; // num is now 20
    return 0;
}