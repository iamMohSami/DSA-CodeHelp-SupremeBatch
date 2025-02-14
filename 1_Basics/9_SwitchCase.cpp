#include<iostream>
using namespace std ; 

int main(){

//Instead of writing many If-Else Statements, we can use SWITCH statement

    int num1 , num2 ; 
    cout << "Enter First Number :" ; 
    cin >> num1 ; 
    cout << "Enter Second Number :";
    cin >> num2 ; 
    char op ; 
    cout << "Enter the Operation [+ , - , * , / ] :" ; 
    cin >> op ; 
    
    switch (op)
    {
    case '+':
        cout << "The Result is :" << num1 << "+" << num2 << " = " << num1+num2 << endl ; 
        break;

    case '-':
        cout << "The Result is :" << num1 << "-" << num2 << " = " << num1-num2 << endl ; 
        break;

    case '*':
        cout << "The Result is :" << num1 << "*" << num2 << " = " << num1*num2 << endl ; 
        break;

    case '/':
        cout << "The Result is :" << num1 << "/" << num2 << " = " << num1/num2 << endl ; 
        break;
    
    default:
    cout << "Enter a Valid Operator!" << endl ; 
        break;
    }

/*Note : Switch case only works on Integral Values like int,char,enum AND DOESNT work on Non-Integral Values like String,float etc...*/

    return 0 ; 
}