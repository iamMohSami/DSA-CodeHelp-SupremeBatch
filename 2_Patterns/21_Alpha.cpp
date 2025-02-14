#include<iostream>
using namespace std; 

int main(){

/*
n=5

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

*/
    int n ; 
    cout << "Enter n : " ; 
    cin >> n ; 
   
   for (int i = 0; i < n; i++)
   {
    char ch = 'A' ; 
    for (int j = 0; j < i+1; j++)
    {
        cout << ch  ;
        ch++ ;  
    }
    char ch2 = 'A' + i - 1  ; 
    for (int j = 0; j < i; j++)
    {        cout << ch2 ;
        ch2-- ; 
    }
    cout << endl ; 
   }
   
   
    return 0 ; 
}