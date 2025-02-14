#include<iostream>
using namespace std ; 

int main(){
    int age ; 
    cout << "Enter Age : " ; 
    cin >> age ; 
    (age >=18)? cout << "Can Vote!" : cout << "Cannot Vote!" ; 
    return 0; 
}