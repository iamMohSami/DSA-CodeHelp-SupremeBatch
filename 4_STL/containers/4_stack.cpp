#include <bits/stdc++.h>
using namespace std;

int main()
{

    // creating a Stack

    stack<int> s;

    // 1. pushing the stack
    s.push(10); // 10
    s.push(20); // 20 -> 10
    s.push(30); // 30 -> 20 -> 10

    // top of stack
    cout << "Top of stack : " << s.top() << endl;

    // 2. popping the stack
    cout << s.top() << " popped from stack\n";
    s.pop();

    // 3. checking if stack is empty
    cout << "Is Stack Empty?" <<  s.empty() << "\n";

    // 4. size of the stack
    cout << "Size of the stack is : " << s.size() << "\n";

    // There is NO ITERATOR in STACK
    // i.e. 
    // stack<int>::iterator it ; 
    //GIVES ERROR : class "std::stack<int, std::deque<int, std::allocator<int>>>" has no member "iterator"C/C++(135)

    return 0;
}