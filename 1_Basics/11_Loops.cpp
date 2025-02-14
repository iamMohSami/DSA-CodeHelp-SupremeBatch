#include<iostream>
using namespace std ; 

int main() {
     // For Loop || understand the Flow

    for (int i = 0; i < 10; i++)
    {
        cout << "DSA is a SuperPower" << endl ;
    }
    
    // All three things : Intialization | Condition | Increment are OPTIONAL
    int p = 1; 
    for(; ; ) {
        if(p==5) break ; 
        cout << p << " " ; 
        p++ ; 
    }
    
    cout << endl ; 

    //Break and Continue Keywords

     for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Number 5 found, stopping the loop." << endl;
            break; // Exit the loop when i equals 5
        }
        cout << "Current number: " << i << endl;
    }

      for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip the rest of the loop when i equals 3
        }
        cout << "Current number: " << i << endl;
    }


// While Loop 

    int k = 1 ; 
    while(k<6) {
        cout << k <<" " ; 
        k++ ; 
    }

cout << endl ; 

// HomeWork Questions
// counting from 0 to -10 

for(int i=0 ; i>=-10 ;i--){
    cout << i <<" " ;
}
cout << endl ; 

// table of 12 
for(int i=1 ; i<=10 ; i++) {
    cout << "12 * " << i << " = " << 12*i << endl ; 
}
cout << endl ; 

// A to Z
for(char ch='A' ; ch<='Z' ; ch++) {
    cout << ch << " " ; 
}

cout << endl ; 

// a to z
for(char ch='a' ; ch<='z' ; ch++) {
    cout << ch << " " ; 
}
cout << endl ; 
cout << endl ; 
cout << endl ; 


// DO-WHILE LOOP
// First Iteration is independent of any condition and always executes
 
 int num = 1 ; 
 do
 {
    cout << num << endl ;
    num++ ; 
 } while (num <=5 );
 cout << endl ; 


// HomeWork Questions : 

//  for(int m=1 ; m<=5 ; m++);
//  {
//     cout << m << " " ; 
//  }

// int global ; 
// if (cin >> global)
// {
//     cout << "DSA" ; 
// }

// if (cout << "Hi")
// {
//     cout << "DSA"  ;
// }




// NESTED LOOPS 

for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        cout << " i :" << i << " and j :" << j << endl ; ;
    }
    
}


for (int i = 1; i <= 2; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        cout << i*j << " ";
    }
    cout << endl ;
}


















    return 0 ; 
}




