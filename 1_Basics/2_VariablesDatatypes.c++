#include<iostream>
using namespace std ; 

int main(){
    //variable define
    int age ; 
    age = 20 ; 
    cout << "My Age is : " << age << endl ; 

    //variable declaration
    int marks ; 
    cout << marks << endl;
    //printing out declared variable which is not yet defined, will result in any GARBAGE VALUE

    // declare and define together
    int height = 175 ; 
    cout << "Your Hieght is : " << height << endl ;

    // variable updation
    height = 180 ; 
    cout << "New/Updated Hieght is : " << height << endl ;

    cout << endl ; 

    //Classifications of DataTypes : Primitive 
    int count = 3 ; 
    float sight = 2.5 ; 
    double pi = 3.145687 ; 
    char alpha = 'S' ; 
    
    bool isHuman = true ; 
    bool isMale = 1 ; 
    bool isAlien = false ;
    bool isFemale = 0 ; 

    cout << "Count / int :" << count <<endl ; 
    cout << "Sight / float:" << sight << endl ;
    cout << "Pi / double :" << pi << endl ;
    //in output ; we get 3.14569 INSTEAD of 3.145687 bcoz DEFAULT PRINTING PRECISION IN C++ is upto 6 numbers only
    cout << "Alpha / char :" << alpha << endl ;
    cout << "isMale / bool :" << isMale << endl ;
     cout << "isAlien / bool :" << isAlien<< endl ;


    cout << endl ; 

    //Sizes of Datatypes in my machine architetcture
    cout << "Size of int (in bytes): " << sizeof(count) << endl ; 
    cout << "Size of float : " << sizeof(sight) << endl ; 
    cout << "Size of double : " << sizeof(pi) << endl ;
    cout << "Size of char : " << sizeof(alpha) << endl ;  
    cout << "Size of boolean : " << sizeof(isHuman) << endl ; 

    //signed int, unsigned int,  long int , long long int ; 
    signed int one = 12345 ; 
    unsigned int two = 12345 ; 
    long int three = 123456 ; 
    long long int four = 12345678 ; 
    cout << "Size of signed int : " << sizeof(one) << endl ; 
    cout << "Size of unsigned int : " << sizeof(two) << endl ; 
    cout << "Size of long int : " << sizeof(three) << endl ; 
    cout << "Size of long long int : " << sizeof(four) << endl ; 

    return 0 ; 
}