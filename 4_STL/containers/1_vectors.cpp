#include<bits/stdc++.h>
using namespace std ;


int main() {





    // 1. VECTOR

    //Intializing a Vector
    vector<int> v ;
    vector<int> marks(10) ;  //with intial no. of blocks
    vector<int> allZeros(10,0) ;  //10 blocks with all values as 0


    // MEMBER FUNCTIONS

    // 1. push_back() function to add elements to vector
    v.push_back(10) ;
    v.push_back(20) ;
    v.push_back(30) ;

    // 2. pop_back() function to remove last element
    v.pop_back() ;

    //3. .begin() : returns a iterator pointing to first block 
    cout << *(v.begin()) << endl ; 

    //4. .end() : returns a iterator pointing to one position after last block
    cout << *(v.end()- 1) << endl ;

    //5. size() : returns the number of elements in the vector
    cout << "Size of vector : " << v.size() << endl ;

    //6. clear() : removes all elements from the vector
    v.clear() ;
    cout << "Size of vector after clear : " << v.size() << endl ;

    //7. front() : accesses the first element in the vector
    vector<int> prices ; 
    prices.push_back(100) ;
    prices.push_back(200) ;
    prices.push_back(300) ;

    cout << "First Price : " << prices.front() << endl ;

    //8. back() : accesses the last element in the vector
    cout << "Last Price : " << prices.back() << endl ;

    //9. empty() : returns true if the vector is empty, else false
    cout << "Is vector empty? : " << prices.empty() << endl ;

    // 10. operator[] : Accesses elements at specified index without bound checking
    cout << "Price at index 1 : " << prices[1] << endl ;
    prices[1] = 250 ;
    cout << "Price at index 1 after update : " << prices[1] << endl ;
    
    // 11. at() : Accesses elements at specific index with bound checking
    try {
        cout << "Price at index 10 : " << prices.at(10) << endl ;
    }
    catch(out_of_range &e) {
        cout << "Out of range error : " << e.what() << endl ;
    }

// NOTES : Whats Bound Checking?? 
    // Bound checking is a feature that checks whether an index is within the valid range of the vector.
    // If the index is out of range, it throws an exception.
    // This feature is useful to prevent accessing elements beyond the valid range of the vector.
    // In C++, there are two types of bound checking:
    // 1. Checked Bound Checking : Throws an exception if the index is out of range.
    // 2. Unchecked Bound Checking : Does not throw an exception, but instead, it returns a default value or throws a runtime error.

    // 12. capacity() : At current instance, the number of elements our vector can hold before needing to allocate more spaces
    cout << "Capacity of vector : " << prices.capacity() << endl ;

    // 13. reserve() : Reserves enough memory to store 'n' elements without modifying the current elements.
    prices.reserve(20) ;
    cout << "Capacity after reserve : " << prices.capacity() << endl ;
    // After calling reserve(), the capacity() will be equal to or greater than 'n'.

    // 14. shrink_to_fit() : Reduces the capacity to fit the number of elements currently stored.
    prices.shrink_to_fit() ;
    cout << "Capacity after shrink_to_fit : " << prices.capacity() << endl ;
    // After calling shrink_to_fit(), the capacity() will be equal to the number of elements currently stored.

    // 15. max_size() : max number of elements vector can hold due to system memory limitations
    cout << "Max size of vector : " << prices.max_size() << endl ;

    // 16. insert() : Inserts elements at specified position. It takes two arguements : where to insert , what to insert
    prices.insert(prices.begin(), 50) ;
    cout << "Price at index 0 after insert : " << prices[0] << endl ;

    // 17. erase() : Removes elements at specified position. It takes two arguements : from where to start , end and ERASES everything in between
    cout << "before Erase : " << prices.size() << endl ; 
    prices.erase(prices.begin() , prices.begin()+2) ;
    cout << "after Erase : " << prices.size() << endl ;


    // 18. swap() : Swaps the contents of two vectors.
   vector<int> first ; 
   vector<int> second ;

   first.push_back(10) ;
   first.push_back(20) ;
   first.push_back(30) ;

   second.push_back(100) ; 
   second.push_back(200) ;
   second.push_back(300) ;

   //Before Swap , printing using FOR EACH LOO
   cout << "\nBefore Swap : " ;
   for(int i : first) {
       cout << i << " " ;
   }

   first.swap(second) ; 
   cout << "\nAfter Swap : " ;
   //After Swap , printing using FOR EACH LOOP
   for(int i : first) {
       cout << i << " " ;
   }













   // 2D VECTOR
   vector<vector<int>> twod (4, vector<int>(4,0)) ; 
   
   //jagged vector 
   vector<vector<int>> jagged = {{1,2,3}, {4,5}, {6,7,8,9}} ;
//    OR
   vector<vector<int>> jagg(3) ; 
   jagg[0] = {1,2,3} ;
   jagg[1] = {4,5} ;
   jagg[2] = {6,7,8,9} ;

   








    return 0 ; 
}