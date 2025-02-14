
#include<iostream>
using namespace std ; 

int main() {
    // If-Else Block
    int age ; 
    cout << "Enter Your Age :" ; 
    cin >> age ; 
    if(age>=18) {
        cout<<"You can Vote!" << endl ;
    } else{
        cout << "You are minor and cant vote!" << endl ;
    }

    // If Else If ladder
    int marks ; 
    cout << "Enter Your marks obtained :" ; 
    cin >> marks ; 
    if(marks>=90){
        cout << "Grade : A" << endl ; 
    }
    else if(marks>=80){
        cout << "Grade : B" << endl ; 
    }
    else if(marks>=70){
        cout << "Grade : C" << endl ; 
    }
    else if(marks>=60){
        cout << "Grade : D" << endl ; 
    }
    else{
        cout  << "Failed!" << endl ; 
    }
/*Note that : Agar first 'IF' condition is satisfied, it prints the value and exits the ladder to end the progrma i.e. if marks=95 ; then technically, it satisfies all the conditions, BUT, as the first IF is also valid as 95>=90 ; then it prints A and exists*/

    //Nested If
    int height ; 
    int weight ; 
    cout << "Enter your Heigth (in cm): "  ; 
    cin >> height ; 
    cout << "Enter your Weight (in kg) : "  ; 
    cin >> weight ; 

    if(height >= 175) {
        if(weight >=80 ) {
            cout << "You are Perfect!" << endl ; 
        }
        else {
            cout << "Eat more Food" << endl ;
        }
    }
    else { 
        cout << "You need Complan!" << endl ;
    }





}