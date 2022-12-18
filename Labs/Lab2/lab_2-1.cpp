#include <iostream>
#include <string>

using namespace std;

// Function that creates an array of characters
char* obj(char* c){
    int arrSize = 0;
    for(int i = 0; c[i] != '\0'; i++){
        arrSize++;
    }

    // Creates new array to be copied to
    char* str = new char[arrSize];

    // Copies characters from original to new array
    for(int i = 0; i < arrSize; i++){
        str[i] = c[i];
    }

    str[arrSize] = '\0';
    
    // Returns array
    return str;
}

int main(){
    char array[9] = {'C', 'O', 'M', 'P', 'U', 'T', 'E', 'R', '\0'};

    char* ptr1 = obj(array);
    cout << "ptr1: " << (void*)ptr1 << '\n';
    cout << "Characters of ptr1: " << ptr1 << '\n';

    char* ptr2 = obj(ptr1);
    cout << "ptr2: " << (void*)ptr2 << '\n';
    cout << "Characters of ptr2: " << ptr2 << '\n';

    return 0;
}