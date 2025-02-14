#include <iostream>
#include <string>
using namespace std;

int main() {
    // use cin>>var to get user input

    // 1. getline(cin, variable)? 

    //Without getline
    string line;
    cout << "Enter a sentence: ";
    cin >> line ; 
    cout << "You entered: " << line << endl;

    /* Output : 
    Enter a sentence: Visca Barca Visca Catalunya
    You entered: Visca */

    string line2 ; 
    cout << "Enter a sentence : " ; 
    getline(cin , line2) ; 
    cout << "You entered: " << line2 << endl;


    return 0;

}
