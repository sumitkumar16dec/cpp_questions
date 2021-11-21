While loop exercise


Question:

Given a vector of integers, determine how many integers are present before you see the value -99.
Note, it's possible -99  is not in the vector! If -99  is not in the vector then the result will be equal to the number of elements in the vector.
The final result should be stored in an integer variable named count.
  
  
Solution:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    //---- WRITE YOUR CODE BELOW THIS LINE----    
    vector<int> vec {1,3,5,15,-99,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    
    int count {0};
    size_t index {0};  // See the Q/A forum for more about size_t
                       // size_t is an unsigned int
                       // you can replace size_t with int or unsigned int and it will work fine
    
    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }
        
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout<< count;

    return 0;
}


Output:
4
