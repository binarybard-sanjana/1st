//deep copy-ensures that changes to the copied object do not affect the original object
 #include <iostream>
using namespace std;

struct Complex {
    int *r, *i; 
};

int main() {
    // Create c1 with dynamic memory allocation
    Complex c1 = {new int(10), new int(20)};
    
    // Acquire memory values
    int p = *c1.r; // Dereference to get the value of the real part
    int q = *c1.i; // Dereference to get the value of the imaginary part

    // Create c2 using the values from c1
    Complex c2 = {new int(p), new int(q)}; // Deep copy

    // Display values
    cout << "c1: " << *c1.r << " + " << *c1.i << "i" << endl; // Display c1
    cout << "c2: " << *c2.r << " + " << *c2.i << "i" << endl; // Display c2

    // Modify c2 to show independence
    (*(c2.r))++; // Increment the real part of c2
    (*(c2.i))++; // Increment the imaginary part of c2

    // Display modified values
    cout << "After modification:" << endl;
    cout << "c1: " << *c1.r << " + " << *c1.i << "i" << endl; // c1 should remain unchanged
    cout << "c2: " << *c2.r << " + " << *c2.i << "i" << endl; // c2 should reflect the changes

    // Clean up memory
    delete c1.r; // Free the memory allocated for c1's real part
    delete c1.i; // Free the memory allocated for c1's imaginary part
    delete c2.r; // Free the memory allocated for c2's real part
    delete c2.i; // Free the memory allocated for c2's imaginary part

    return 0;
}

  //complex c1={new int(10),new int(20)};
    //int p=*(c1.r),q=*(c1.i);//memory aquired
    //complex c2={new int(p),new int(q)};//dynamic memory allocation
