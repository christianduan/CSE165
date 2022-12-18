#include <iostream>

using namespace std;

/* This function takes in the reference of a pointer to a 
   pointer and increments the address by one
*/
void modPtrPtr(int**& rPP){
    (*rPP)++;
}

int main(){
    // Array that we are traversing through
    int a[] = {100, 165, 175};

    // This points to the element addresses of the array
    int* firstPtr = a;
    // This points to the pointer of the pointer of the elements
    // in the array
    int** secondPtr = &firstPtr;
    
    // Prints out the unmodified pointer of a pointer of reference
    cout << "Unmodified: Welcome to CSE " << *firstPtr << '\n';

    // Calls the modifier function to move through the array addresses
    // by one
    modPtrPtr(secondPtr);

    // Prints out the modified pointer of a pointer of reference
    cout << "Modified: Welcome to CSE " << **secondPtr << endl;

    return 0;
}